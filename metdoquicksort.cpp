#include <iostream>
using namespace std;

void Reduce(int A[], int inicio, int final) {
    int izq = inicio;
    int der = final;
    int pos = izq;
    int cen = 1;

    while (cen == 1) {
        cen = 0;

        while (A[pos] <= A[der] && pos != der) {
            der = der - 1;
        }

        if (pos != der) {
            int aux = A[pos];
            A[pos] = A[der];
            A[der] = aux;
            pos = der;

            while (A[pos] >= A[izq] && pos != izq) {
                izq = izq + 1;
            }

            if (pos != izq) {
                aux = A[pos];
                A[pos] = A[izq];
                A[izq] = aux;
                pos = izq;
                cen = 1;
            }
        }
        if (pos - 1> inicio) {
            Reduce(A, inicio, pos - 1);
        }
        
        if (pos + 1 < final) {
            Reduce(A, pos + 1, final);
        }
    }
}
void QuickSort(int A[], int n) {
    Reduce(A, 1, n);
}
int main() {
    int n;
    cout << "La cantidad de elementos es: ";
    cin >>n;

    int A[10];

    for (int i= 1; i <= n; i++) {
        cout << "Ingresa el elemento ";
        cin >> A[i];
   }
    QuickSort(A, n);

    cout << "el orden de muestra es: ";
    for (int i= 1; i <= n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}


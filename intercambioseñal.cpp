#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "la cantidad de elementos: ";
    cin>>n;

    int v[n];

    cout << "Ingrese los elementos: ";
    for (int i=0; i < n; i++) {
        cin >> v[i];
    }
    bool cambio = true;

    for (int i = 0; i < n - 1 && cambio; i++) {
        cambio = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int aux=v[j];
                v[j]=v[j+1];
                v[j+1] = aux;

                cambio=true;
            }
        }
    }
    cout << "como queda: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
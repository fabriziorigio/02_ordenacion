#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Cantidad de elementos: ";
    cin >> n;

    int v[n];
    cout << "Ingrese los elementos: "<<endl;
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    for (int i=1;i<n; i++) {
        int aux = v[i];
        int j = i - 1;

        while (j>= 0 && v[j]>aux) {
            v[j + 1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
    
    cout << "como queda: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;

void shellSort(int A[], int n) {
    int k = n + 1;
    while (k > 1) {
        k = k / 2;
        for (int i = k + 1; i <= n; i++) {
            int aux = A[i];
            int j = i;
            while (j - k >= 1 && A[j - k] > aux) {
                A[j] = A[j - k];
                j = j - k;
            }
            A[j] = aux;
        }
    }
}
    int main(){
    	int n;
    	
    	cout<<"ingrese la cantidad de elementos: ";
    	cin>>n;
    	
    	int A[100];
    	
    	for(int i=1;i<=n; i++ ){
    		cout<<"Ingresa el numero: ";
    		cin>> A[i];
		}
		shellSort(A, n);
		cout<<"Lo ordenamos de forma ascendente: "<<endl;
		for(int i=1; i<=n;i++){
			cout<<A[i]<< " ";
	
		}

    	return 0;
}


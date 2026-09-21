#include<iostream>
using namespace std;


int main(){
	int n, V[100];
	
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"ingrese el valor: ";
		cin>>V[i];
	}
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			
			if (V[j]> V[j+1]){
				int aux;
			aux= V[j];
			V[j] = V[j+1];
			V[j+1]=aux;
			}
		}
	}
	cout<<"como queda: ";
	for(int i=0; i<n;i++){
		cout<< V[i] <<" ";
	}
	return 0;
	
}
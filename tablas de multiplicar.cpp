//Programa que muestre en pantalla la tabla de multiplicar de n 

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero;
	
	 cout<<"Digite un numero: "; cin>>numero; cout<<endl;
  	
	for(int i=1;i<=10;i++){
		
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;	
	}
	
	cout<<"\n\n";	
	system("pause");
	return 0;
}

/*Escribe un programa que defina un vector de numeros y calcule la multiplicacion
acumulada de sus elementos
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int numero[] = {1,2,3,4,5};
	int multi = 1;
	
	
	for(int i=0;i<5;i++){
		
		multi *= numero[i];
	}
	
	cout<<"la multiplicacion es: "<<multi<<endl;

cout<<"\n\n";
system("pause");
return 0;	
}

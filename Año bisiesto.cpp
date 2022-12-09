//Escriba un programa que diga si el año 2080 es bisiesto o no

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int bisiesto;
	
	cout<<"Introduzca un anio: "; cin>>bisiesto;
	
	if(bisiesto%4==0 && bisiesto %100 !=0){
		cout<<"SI es bisiesto ";
	}
	else{
		cout<<"NO es bisiesto ";
	}
	
	system("pause");
	return 0;
}

//Programa de adivinar el numero y cuente los intentos usados.

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	int numero, dato, contador = 0;
	
	srand(time(NULL));//generar un numero aleatorio
	dato = 1 + rand()%(100);	//variable = limite_inferior + rand() % (limite_superior +1 - limite inferior);
	
	cout<<"Para poder jugar debe marcar numeros del 1-100\n";
	
	do{
		cout<<"Digite un numero: ";cin>>numero;
		
		if(numero>dato){
			cout<<"\nDigite un numero menor\n\a";
		}
	   if(numero<dato){
         	cout<<"\nDigite un numero mayor\n\a";
     	}
    	contador++;	
    	
}while(numero !=dato);
	
	cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n";
	cout<<"Numero de intentos: "<<contador<<endl;
	
	cout<<"\n";
	system("pause");
	return 0;
}

/*Programa de inicio de sesion, donde al registrarse verifique y si
es correcto te la bienvenida,en caso contrario darle tres intentos y si los 
supera mostrar un mensaje donde le diga que supero el limite de intentos y cerrar el programa*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char usuario[20],clave[20],usu2[20],cla2[20];
	
	cout<<"Ingrese los datos para registrarse\nUsuario: "; cin.getline(usuario,20,'\n');
	
	cout<<"\nClave: "; cin.getline(clave,20,'\n');	
	

    for(int i=1; i<=3; i++){
    
	cout<<"\nInicie sesion con sus datos ingresados\nUsuario: ";
	cin.getline(usu2,20,'\n');
	
	cout<<"\nIngrese su clave: "; cin.getline(cla2,20,'\n');
      
	
	  if(strcmp(usuario,usu2)==0 && strcmp(clave,cla2)==0){
		cout<<"\nBienvenido "<<usu2<<"!";
		break;
	  }
              
	else {
		cout<<"\nSu usuario y/o clave son incorrectos";
		
		if(i == 3){
			cout<<"\nHa llegado al maximo de intentos";
		}
	}
	
     } 
     
    cout<<"\n\n";
	getch();
	return 0;
}


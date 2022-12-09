/*Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos:
nombre, edad, promedio, pedir datos al usuario para tres alumnos, comprobar cual de 
los tiene el mejor promedio y posteriormente sacarlo en pantalla
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Alumno1{
	
	char nombre[20];
	int edad;
	int promedio;	
}Alumno1;

struct Alumno2{
	
	char nombre2[20];
	int edad2;
	int promedio2;
	
}Alumno2;

struct Alumno3{
	
	char nombre3[20];
	int edad3;
	int promedio3;	
}Alumno3;


int main(){
	
	fflush(stdin); //Vaciar buffer y poder seguir escribiendo
	cout<<"\n-Alumno 1-\n\n";
	cout<<"Nombre: ";          cin.getline(Alumno1.nombre,20,'\n');
	cout<<"Edad: ";           cin>>Alumno1.edad;
	cout<<"Promedio: ";       cin>>Alumno1.promedio;    
	
	fflush(stdin);
	cout<<"\n-Alumno 2-\n\n";
	cout<<"Nombre: ";          cin.getline(Alumno2.nombre2,20,'\n');
	cout<<"Edad: ";            cin>>Alumno2.edad2;
	cout<<"Promedio: ";       cin>>Alumno2.promedio2; 
	
	fflush(stdin);
	cout<<"\n-Alumno 3-\n\n";
	cout<<"Nombre: ";          cin.getline(Alumno3.nombre3,20,'\n');
	cout<<"Edad: ";            cin>>Alumno3.edad3;
	cout<<"Promedio: ";        cin>>Alumno3.promedio3;    
	   
	if(Alumno1.promedio>Alumno2.promedio2 && Alumno1.promedio>Alumno3.promedio3){
		cout<<"\nEstudiante con mayor promedio: "<<endl;
		cout<<"Nombre: "<<Alumno1.nombre<<endl;
		cout<<"Edad: "<<Alumno1.edad<<endl;
		cout<<"Promedio: "<<Alumno1.promedio<<endl;
		
	}else if(Alumno2.promedio2>Alumno3.promedio3 && Alumno2.promedio2>Alumno1.promedio){
		cout<<"\nEstudiante con mayor Promedio: "<<endl;
		cout<<"Nombre: "<<Alumno2.nombre2<<endl;
		cout<<"Edad: "<<Alumno2.edad2<<endl;
		cout<<"Promedio: "<<Alumno2.promedio2<<endl;

	}else if(Alumno3.promedio3>Alumno1.promedio && Alumno3.promedio3>Alumno2.promedio2){
		cout<<"\nEstudiante con mayor Promedio: "<<endl;
		cout<<"Nombre: "<<Alumno3.nombre3<<endl;
		cout<<"Edad: "<<Alumno3.edad3<<endl;
		cout<<"Promedio: "<<Alumno3.promedio3<<endl;
		
	}

    cout<<"\n\n";
    getch();
    return 0;	
}

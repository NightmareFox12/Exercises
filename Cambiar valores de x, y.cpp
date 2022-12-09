//Como cambiar variables x, y

#include<iostream>

using namespace std;

int main (){
	int x,y,aux;
	
cout<<"Digite el valor de X: "; cin>>x;
cout<<"Digite el valor de Y: "; cin>>y;

    aux= x; 
    x = y;
    y = aux;

cout<<"El nuevo valor de x es: "<<x<<endl;
cout<<"El nuevo valor de y es: "<<y<<endl;

  return 0;	
}

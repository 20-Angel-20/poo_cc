#include "Cliente.cpp"
#include <iostream>
using namespace std;

int main(){
	string nit,nom,ape,dir;
	int tel;
	cout<<"Ingrese NIT:";
	cin>>nit;
	cout<<"Ingrese Nombre:";
	cin>>nom;
	cout<<"Ingrese Apellido:";
	cin>>ape;
	cout<<"Ingrese Direccion:";
	cin>>dir;
	cout<<"Ingrese Telefono:";
	cin>>tel;

	Cliente cliente1(nom,ape,dir,tel,nit);
	cliente1.mostrar();
	
	cout<<"Ingresar nuevo NIT:";
	cin>>nit;
    cout<<"______________________"<<endl;
	cliente1.setNit(nit);
	cout<<"Nuevo NIT:"<<cliente1.getNit()<<endl;
	system("pause");
	return 0;
}

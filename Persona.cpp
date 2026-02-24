#include <iostream>
using namespace std; 
 class Persona{ 
 	//Atributos
    protected: string nombres;
	           string apellidos;
			   string direccion; 
 			    int telefono;
 	//Constructores
 	protected:
 			Persona(){}
 	        
			Persona(string nom,string ape,string dir,int tel){
			    nombres = nom;
			    apellidos = ape;
			    direccion = dir;
			    telefono = tel;
			 }	
	// Metodo
	void mostrar(){
		cout<<"Nombre:"<<nombres<<endl;
		cout<<"Apellido:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
	}
 }; 

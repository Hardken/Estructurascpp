#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Nodo{
	private:
		int id_p;
		string nombre_p;
	public:
		Nodo *der;
		Nodo *izq;
		Nodo();
		int getId_p();
		string getNombre_p();
		void setId_p(int);
		void setNombre_p(string);
	
		void crearNodo(int, string);
		void mostrarNodo();	
};

		int Nodo::getId_p(){
			return this->id_p;
		}
		string Nodo::getNombre_p(){
			return this->nombre_p;
		}
		void Nodo::setId_p(int a){
			this->id_p=a;
		}
		void Nodo::setNombre_p(string b){
			this->nombre_p=b;
		}


Nodo::Nodo(){
		this->id_p=0;

		this->der=NULL;

		this->izq=NULL;
}
void Nodo::crearNodo(int id, string nombre){
	this->id_p=id;
	this->nombre_p=nombre;

}
void Nodo::mostrarNodo(){
	cout<<endl<<this->id_p<<", "<<this->nombre_p<<", $"<<endl;
}

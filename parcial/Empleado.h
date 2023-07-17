#include<iostream>
#include<stdlib.h>
using namespace std;
class Empleado{
	private:
		int id_p;
		string nombre_p;
		int salario;
		int Dias;
		int sueldo, devengado;
		int salud, pension, retencionf, auxtra, netoap, deducciones;
	public:
		Empleado();
		Empleado *sig;
		int getId_p();
		string getNombre_p();
		int getsalario();
		int getdias();
		int getsalud();
		int getdevengado();
		int getpenion();
		int getretencionf();
		int getauxtra();
		int getnetoap();
		int getdeducciones();
		void setId_p(int);
		void setNombre_p(string);
		void setsalario(int);
		void setdias(int);
		void setsalud(int);
		void setdevengado(int);
		void setpension(int);
		void setretencionf(int);
		void setauxtra(int);
		void setnetoap(int);
		void setdeducciones(int);
		void crearEntrada(int, string, int, int);
		void mostrarEntrada();
		void mostrarnomina();	
};

		int Empleado::getId_p(){
			return this->id_p;
		}
		string Empleado::getNombre_p(){
			return this->nombre_p;
		}
		int Empleado::getsalario(){
			return this->salario;
		}
		int Empleado::getdias(){
			return this->Dias;
		}
		int Empleado::getdevengado(){
			return this->devengado;
		}
		int Empleado::getauxtra(){
			return this->auxtra;
		}
		int Empleado::getnetoap(){
			return this->netoap;
		}
		int Empleado::getpenion(){
			return this->pension;
		}		
		int Empleado::getretencionf(){
			return this->retencionf;
		}
		int Empleado::getsalud(){
			return this->salud;
		}
		int Empleado::getdeducciones(){
			return this->deducciones;
		}
		void Empleado::setauxtra(int s){
			this->auxtra;
		}
		void Empleado::setdevengado(int e){
			this->devengado;
		}
		void Empleado::setnetoap(int f){
			this->netoap;
		}
		void Empleado::setpension(int g){
			this->pension;
		}
		void Empleado::setretencionf(int h){
			this->retencionf;
		}
		void Empleado::setsalud(int i){
			this->salud;
		}
		void Empleado::setId_p(int a){
			this->id_p=a;
		}
		void Empleado::setNombre_p(string b){
			this->nombre_p=b;
		}
		void Empleado::setsalario(int c){
			this->salario=c;
		}
		void Empleado::setdias(int d){
			this->Dias=d;
		}
		void Empleado::setdeducciones(int j){
			this->deducciones;
		}

Empleado::Empleado(){
		this->id_p=0;
		this->salario=0;
		this->sig=NULL;
		this->Dias=0;
		this->auxtra=0;
		this->pension=0;
		this->netoap=0;
		this->devengado=0;
		this->retencionf=0;
		this->salud=0;
		this->deducciones=0;
}

void Empleado::crearEntrada(int id, string nombre, int salario, int dias){
	this->id_p=id;
	this->nombre_p=nombre;
	this->salario=salario;
	this->Dias=dias;
}
void Empleado::mostrarEntrada(){
	cout<<"id empleado: "<<this->id_p<<endl;
	cout<<"Nombre: "<<this->nombre_p<<endl;
	cout<<"Salario: "<<this->salario<<endl;
	cout<<"Dias trabajados: "<<this->Dias<<endl;
}
void Empleado::mostrarnomina(){
	cout<<"sueldo devengado: "<<this->devengado<<endl;
	cout<<"aporte pension: "<<this->pension<<endl;
	cout<<"aporte salud: "<<this->salud<<endl;
	cout<<"retencion de fuente: "<<this->retencionf<<endl;
	cout<<"auxilio de transporte: "<<this->auxtra<<endl;
	cout<<"Total deducciones:  "<<this->deducciones<<endl;
	cout<<"nato a pagar: "<<this->netoap<<endl;
}

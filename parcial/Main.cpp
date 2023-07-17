#include"ListaSimple.h"
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
int opc = 0;
ListaSimple *objlistsimple=new ListaSimple();
int id=0;
int dias=0;
double x=0;
int y=0;
int z=0;
int opcion=0;
int sal=0;
int uni=0;
string nom;
string nombre;
int valor=0;
do{system("cls");
cout<<"------------menu-----------"<<endl;
cout<<"|(1) Crear Entradas   	 |"<<endl;
cout<<"|(2) Mostrar Entradas     |"<<endl;
cout<<"|(3) Mostrar Nomina       |"<<endl;
cout<<"|(4) Eliminar Entradas    |"<<endl;
cout<<"|(5) Buscar Entradas      |"<<endl;
cout<<"|(6) Modificar Entradas   |"<<endl;
cout<<"|(9) salir                |"<<endl;
cout<<"------------menu-----------"<<endl;
cout<<" seleccione una opcion:  "<<endl;cin>>opc;

switch(opc){
case 1:{
		system("cls");
	
	cout<<"Ingresar nodo"<<endl;
	cout<<"\n";
	id=id+1;
	cout<<"Digite nombre: "<<endl;
	cin>>nombre;
	cout<<"Digite salario: "<<endl;
	cin>>sal;
	cout<<"Digite cantidad de dias trabajados: "<<endl;
	cin>>dias;
	Empleado *nuevo=new Empleado();
	nuevo->crearEntrada(id,nombre,sal,dias);
	objlistsimple->isertarNodo(nuevo);
	break;
}

case 2:{
	system("cls");
	cout<<"Mostrar lista"<<endl;
	cout<<"\n";
	objlistsimple->mostrarLista();
	break;
}
case 3:{
	system("cls");
	cout<<"Mostrar artículos"<<endl;
	objlistsimple->mostrarLista();
	objlistsimple->CalcularNomina();
	break;
}
case 4:{
	system("cls");
	cout<<"Eliminar producto "<<endl;
	cout<<"Digite ID de producto "<<endl;
	cin>>y;
	objlistsimple->eliminarEmpleado(y);
	break;
}
case 5:{
	system("cls");
    cout<<"Buscar producto"<<endl;
//	objlistsimple->buscarProducto(z);
	break;
}
case 6:{
	system("cls");
    cout<<"Modificar producto"<<endl;
	objlistsimple->modificarProducto(opc, nom, sal, dias);
	break;
}
	
case 9:{
	system("cls");
	cout<<"salir"<<endl;
	
	
	
	break;
}
	
default:{
	cout<<"error: escoja una opcion valida"<<endl;
	break;;
}	
}
system("pause");

}while(opc !=9);
	
	return 0;
}

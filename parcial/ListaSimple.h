#include"Empleado.h"
class ListaSimple{
	public:
		ListaSimple();
		Empleado *cabLista;
		void isertarNodo(Empleado *&);
		void mostrarLista();
		void CalcularNomina();
		void mostrarProdUndsx(int);
		void eliminarEmpleado(int);
		void buscarProducto(int);
		void modificarProducto(int, string, int, int);
		void mostrarnomina();
		
};
ListaSimple::ListaSimple(){
	this->cabLista= NULL;
}

void ListaSimple::isertarNodo(Empleado *&nuevo){
	if(cabLista==NULL && nuevo!=NULL){// crea el primer prodcuto de la lista
		cabLista=nuevo;
		cout<<"Se creo la cabeza de la lista"<<endl;
	}else{
		if(cabLista!=NULL && nuevo!=NULL){
			Empleado *aux1 = this->cabLista;
			while(aux1->sig!=NULL){//busca el ultimo nodo que apunta a NULL
				aux1 = aux1->sig;
			}
			aux1->sig = nuevo;//engancha el nuevo nodo
		}
	}
	
}
void ListaSimple::mostrarLista(){
	if(cabLista!=NULL){ //pregunta si la lista existe
	Empleado *aux2 = this->cabLista;
	// crear un auxiliar para recorrer lista
	this->cabLista->mostrarEntrada();
		while(aux2->sig!=NULL){// recorrer lista
		
			aux2 = aux2->sig;//avanzar al siguiente nodo
			aux2->mostrarEntrada();
		}
	
	}else{
		cout<<"Lista no existe"<<endl;
	}	
}
void ListaSimple::eliminarEmpleado(int y){
		if(this->cabLista!=NULL){
			Empleado *aux5 = this->cabLista;
			Empleado *ant=NULL;
			while((aux5->sig!=NULL) && (aux5->getId_p()!=y)){
				ant=aux5;//Nodo anterior
				aux5=aux5->sig;//El avance 
			}
			if(aux5==NULL){
				cout<<"No existe el producto en la lista"<<endl;
			}
			else if(ant==NULL){
				this->cabLista=this->cabLista->sig;//Asigna como cabeza al siguiente nodo de la lista.
				delete aux5;	
			}
			else{
				ant->sig=aux5->sig;//Se enlaza la lista
				delete aux5;
			}	
		}
	}
	void ListaSimple::modificarProducto(int opcion, string nom, int sal, int dias ){
		cout<<"Ingrese el id del empleado a buscar: "<<endl;
		cin>>opcion;
		
		if(this->cabLista!=NULL){
			Empleado *aux=this->cabLista;
			
			if(this->cabLista->getId_p() == opcion){
				cout<<"Digite nuevo nombre: "<<endl;
				cin>>nom;
				cout<<"Digite nuevo salario: "<<endl;
				cin>>sal;
				cout<<"Digite nueva cantidad de dias trabajados: "<<endl;
				cin>>dias;
				
				this->cabLista->setNombre_p(nom);
				this->cabLista->setsalario(sal);
				this->cabLista->setdias(dias);
			}
			else{
				cout<<"El producto no existe"<<endl;
			}
		
			
			while(aux->sig!=NULL){
				aux=aux->sig;
				if(aux->getId_p()==opcion){
				cout<<"Digite nuevo nombre: "<<endl;
				cin>>nom;
				cout<<"Digite nuevo salario: "<<endl;
				cin>>sal;
				cout<<"Digite nueva cantidad de dias trabajados: "<<endl;
				cin>>dias;
				
				aux->setNombre_p(nom);
				aux->setsalario(sal);
				aux->setdias(dias);
				}
			
			}
		}
		else{
			cout<<"La lista no existe"<<endl;
		}
	}	
	
void ListaSimple::CalcularNomina(){
	int SDev=0;
	int sal=0;
	int pen=0;
	int rfu=0;
	int nep=0;
	int toded=0;
	int trans=0;
	if(cabLista!=NULL){
		Empleado *aux = this->cabLista;
		SDev=(this->cabLista->getsalario()/30)*(this->cabLista->getdias());
		sal=SDev*0.04;
		pen=SDev*0.04;
		rfu=SDev*0.03;
		toded=(sal+pen+rfu);
		if(this->cabLista->getsalario()>877803){
			trans=0;
		}else{
			trans=120854;
		}
	nep=(SDev)+(this->cabLista->getauxtra())-(toded);
	this->cabLista->mostrarEntrada();		
	cout<<"sueldo devengado: "<<SDev<<endl;
	cout<<"aporte pension: "<<pen<<endl;
	cout<<"aporte salud: "<<sal<<endl;
	cout<<"retencion de fuente: "<<rfu<<endl;
	cout<<"auxilio de transporte: "<<trans<<endl;
	cout<<"Total deducciones:  "<<toded<<endl;
	cout<<"neto a pagar: "<<nep<<endl;
		while(aux->sig!=NULL){
		aux=aux->sig;
		SDev=(aux->getsalario()/30)*(aux->getdias());
		sal=SDev*0.04;
		pen=SDev*0.04;
		rfu=SDev*0.03;
		toded=(sal+pen+rfu);
		if(aux->getsalario()>877803){
			aux->setauxtra(0);
		}else{
			aux->setauxtra(120854);
		}
		nep=(SDev)+(aux->getauxtra())-(toded);
		aux->mostrarEntrada();		
	cout<<"sueldo devengado: "<<SDev<<endl;
	cout<<"aporte pension: "<<pen<<endl;
	cout<<"aporte salud: "<<sal<<endl;
	cout<<"retencion de fuente: "<<rfu<<endl;
	cout<<"auxilio de transporte: "<<trans<<endl;
	cout<<"Total deducciones:  "<<toded<<endl;
	cout<<"neto a pagar: "<<nep<<endl;
		}
	}else{
		cout<<"No hay ninguna entrada"<<endl;
	}
}



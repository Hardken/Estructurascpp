#include"Nodo.h"
class ArbolB{
	public:
		Nodo *raiz;
		ArbolB();
		void insertarNodo(Nodo *&nuevo);
		void preOrden(Nodo *&aux);
		void inOrden(Nodo *&aux);
		void postOrden(Nodo *&aux);			
		void mostrarArbol(Nodo *nuevo, int cont);
		void padres(Nodo *&aux);
		void hojas(Nodo *&aux);	
		void cpadres(Nodo *&aux);
		void chojas(Nodo *&aux);
};
ArbolB::ArbolB(){
	this->raiz=NULL;
}
void ArbolB::insertarNodo(Nodo *&nuevo){
	if(nuevo!=NULL){
		if(this->raiz!=NULL){//pregunte si la raiz exite
			//cuando existe la raiz del arbol se crean la hojas
			Nodo *aux=this->raiz;
			while(aux!=NULL){
				
			if(nuevo->getId_p()>aux->getId_p()){
				if(aux->der==NULL){
					aux->der=nuevo;
					return;//se sale de todos los ciclos
				}else{
					aux=aux->der;
				}
				
			}else if(nuevo->getId_p()<aux->getId_p()){//parte izq
				if(aux->izq==NULL){
					aux->izq=nuevo;
					return;	
				}else{
					aux=aux->izq;
				}
			}else{
				cout<<"El nodo ya existe"<<endl;
				return;			
			}
			}
		}else{//cuando el arbol no existe se crea la raiz
			this->raiz=nuevo;
			cout<<"Se creo el nodo raiz"<<endl;
		}
	}else{
		cout<<"El objeto nodo nuevo es nulo"<<endl;
	}
}
//Función para recorrido preOrden
void ArbolB::preOrden(Nodo *&aux){
	if(aux!=NULL){
		
		aux->mostrarNodo();
		preOrden(aux->izq);
		preOrden(aux->der);
	}
}
//Función para recorrido inOrden
void ArbolB::inOrden(Nodo *&aux){
 if(aux!=NULL){ //si el árbol está vácio
  inOrden(aux->izq);
  aux->mostrarNodo();
  inOrden(aux->der);
 }
}

//Función para recorrido postOrden
void ArbolB::postOrden(Nodo *&aux){
 if(aux==NULL){ //Si el árbol está vacío
  return;
 }else{
  postOrden(aux->izq);
  postOrden(aux->der);
  aux->mostrarNodo();
 }
}
void ArbolB::mostrarArbol(Nodo *nuevo, int cont){
	if(nuevo==NULL){
		return;
	}else{
		mostrarArbol(nuevo->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<nuevo->getNombre_p()<<endl;
		mostrarArbol(nuevo->izq,cont+1);
	}

}
void ArbolB::padres(Nodo *&aux){
		if(aux!=NULL){
		padres(aux->der);
		padres(aux->izq);
		if(aux->der!=NULL or aux->izq!=NULL){
			cout<<aux->getId_p()<<",";
		}
	}
}
void ArbolB::hojas(Nodo *&aux){
		if(aux!=NULL){
		hojas(aux->der);
		hojas(aux->izq);
		if(aux->der==NULL && aux->izq==NULL){
			cout<<aux->getId_p()<<",";
		}
	}
}
void ArbolB::cpadres(Nodo *&aux){
	int cont=0;
		if(aux!=NULL){
		padres(aux->der);
		padres(aux->izq);
		if(aux->der!=NULL or aux->izq!=NULL){
			cont++;
		}
		cout<<"La cantidad de padres es: "<<cont<<endl;
	}
}
void ArbolB::chojas(Nodo *&aux){
	int cont=0;
		if(aux!=NULL){
		hojas(aux->der);
		hojas(aux->izq);
		if(aux->der==NULL && aux->izq==NULL){
			cont++;
		}
		cout<<"La cantidad de hijos es: "<<cont<<endl;
	}
}


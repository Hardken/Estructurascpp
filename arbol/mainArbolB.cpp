#include "ArbolB.h"
using namespace std;
int cont=0;
int main(){
	int id=0;
	int opc=0;
	int opcr=0;
	string nom;
	ArbolB *objAB = new ArbolB();
	
	do{
		system("cls");
		cout<<"Arbol binario"<<endl;
		cout<<"1. insertar hoja"<<endl;
		cout<<"2. Recorrer arbol Binario"<<endl;
		cout<<"3. Mostrar arbol Binario"<<endl;
		cout<<"4. Mostrar padres arbol Binario"<<endl;
		cout<<"5. Mostrar hojas arbol Binario"<<endl;
		cout<<"6. Mostrar cantidad padres arbol Binario"<<endl;
		cout<<"7. Mostrar cantidad hojas arbol Binario"<<endl;		
		cout<<"9. salir"<<endl;
		cout<<"Seleccione una opcion: ";cin>>opc;
		switch(opc){
			case 1:{
				cout<<"insertar hoja"<<endl;
				cout<<"Ingrese ID para nodo: ";cin>>id;
				cout<<"Ingrese Nombre: ";cin>>nom;
				Nodo *nuevo= new Nodo();
				nuevo->crearNodo(id, nom);
				objAB->insertarNodo(nuevo);
				break;
			}
			case 2:{
				do{
					system("cls");
				cout<<"Recorrer arbol arbol Binario"<<endl;
				cout<<"1.Recorrer en preOrden arbol Binario"<<endl;
				cout<<"2.Recorrer en inOrden arbol Binario"<<endl;
				cout<<"3.Recorrer en postOrden arbol Binario"<<endl;
				cout<<"9.salir"<<endl;
				cout<<"Seleccione una opcion: ";cin>>opcr;
				switch(opcr){
					case 1:{
						system("cls");
					cout<<"Recorrer en preOrden arbol Binario"<<endl;	
					if(objAB->raiz!=NULL){
						Nodo *aux=objAB->raiz;
						objAB->preOrden(aux);
					}else{
						cout<<"La lista no exite"<<endl;
					}
						system("pause");						
						break;
					}
					case 2:{
						system("cls");
					cout<<"Recorrer en inOrden arbol Binario"<<endl;	
					if(objAB->raiz!=NULL){
						Nodo *aux=objAB->raiz;
						objAB->inOrden(aux);
					}else{
						cout<<"La lista no exite"<<endl;
					}
						system("pause");						
						break;
					}
					case 3:{
						system("cls");
						cout<<"Recorrer en postOrden arbol Binario"<<endl;
					if(objAB->raiz!=NULL){
						Nodo *aux=objAB->raiz;
						objAB->postOrden(aux);
					}else{
						cout<<"La lista no exite"<<endl;
					}
						system("pause");						
						break;
					}
					case 9:{
					cout<<"Programa finalizado"<<endl;
					break;
					}
					default:{
					cout<<"La opcion indicada no es correcta"<<endl;
					break;
					}													
				}
				}while(opcr!=9);
				break;
			}
			case 3:{
				system("cls");
				cout<<"Mostrar arbol Binario"<<endl;
				Nodo *aux=objAB->raiz;
				objAB->mostrarArbol(aux,cont);
				cout<<"\n";
				system("pause");
				break;
			}
			case 4:{
				system("cls");
				cout<<"Mostrar padres arbol Binario"<<endl;
				Nodo *aux=objAB->raiz;
				objAB->padres(aux);
				cout<<"\n";
				system("pause");
				break;
			}
			case 5:{
				system("cls");
				cout<<"Mostrar hijos arbol Binario"<<endl;
				Nodo *aux=objAB->raiz;
				objAB->hojas(aux);
				cout<<"\n";
				system("pause");
				break;
			}
			case 6:{
				system("cls");
				cout<<"Mostrar cantidad padres arbol Binario"<<endl;
				Nodo *aux=objAB->raiz;
				objAB->cpadres(aux);
				system("pause");
				break;
			}
			case 7:{
				system("cls");
				cout<<"Mostrar cantidad hijos arbol Binario"<<endl;
				Nodo *aux=objAB->raiz;
				objAB->chojas(aux);
				system("pause");
				break;
			}			
			case 9:{
				cout<<"Programa finalizado"<<endl;
				exit(0);
				break;
			}
			default:{
				cout<<"La opcion indicada no es correcta"<<endl;
				break;
			}
		}
	}while(opc!=9);
return 0;
}

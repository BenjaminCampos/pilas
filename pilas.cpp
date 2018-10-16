#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int);

void sacarPila(Nodo *&,int&);

int main(){
	Nodo *pila=NULL;
	int dato;
	
	cout<<"dijite un numero:";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"dijite otro numero a la pila\n";
	cin>>dato;
	agregarPila(pila,dato);
	
	int opc;
	cout<<"\n";
	cout<<"sacando los elementos de la pila"<<endl;
		while(pila !=NULL){
			sacarPila(pila,dato);
			
			if(pila!=NULL){
				cout<<dato<<" , \n ";
			}
			else{
				cout<<dato<<" . ";
			    }
		}
	
	
	return 0;
}
 void agregarPila(Nodo *&pila,int n){
 	Nodo *nuevo_nodo=new Nodo();
 	nuevo_nodo->dato=n;
 	nuevo_nodo->siguiente=pila,
 	pila=nuevo_nodo;
 	
 	cout<<"\n el elemento ["<<n<<"]"<<"fue agregado correctamente a la pila\n \n";
 }
 void sacarPila(Nodo *&pila,int &n){
 	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	cout<<"limpiando pila\n";
	delete aux; 	
 }

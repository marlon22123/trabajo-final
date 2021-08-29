#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};
void menu();
Nodo *CrearNodo(int);
void InsertarNodo(Nodo *&, int);
void MostrarArbol(Nodo *, int);

Nodo *arbol = NULL;

int main(){
    menu();

    getch();
    return 0;
}

void menu(){
    int dato, opcion, contador = 0;

    do{
        cout<<":MENU:"<<endl;
        cout<<"1.INSERTAR UN NUEVO NODO"<<endl;
        cout<<"2.MOSTRAR EL ARBOL COMPLETO"<<endl;
        cout<<"3.SALIR"<<endl;
        cout<<"ELIJA UNA OPCION :";
        cin>>opcion;

        switch(opcion){
            case 1:cout<<"\nDigite un numero:";
            cin>>dato;
            InsertarNodo(arbol, dato);
            cout<<"\n";
            system("pause");
            break;

            case 2: cout<<"\nMOSTRAR EL ARBOL COMPLETO:\n\n";
            MostrarArbol(arbol, contador);
            cout<<"\n";
            system("pause");
            break;
        }
        system("cls");
    }
    while(opcion !=3);
}

Nodo *CrearNodo(int n){
    Nodo *Nuevo_Nodo = new Nodo();

    Nuevo_Nodo->dato = n;
    Nuevo_Nodo->der = NULL;
    Nuevo_Nodo->izq = NULL;

    return Nuevo_Nodo;
}

void InsertarNodo(Nodo *&arbol, int n){
    if(arbol == NULL){
        Nodo*Nuevo_Nodo = CrearNodo(n);
        arbol = Nuevo_Nodo;
    }
    else{
        int ValorRaiz = arbol->dato;
        if(n < ValorRaiz){
            InsertarNodo(arbol->izq, n);
        }
        else {
            InsertarNodo(arbol->der, n);
        }
    }
}
void MostrarArbol(Nodo *arbol, int cont){
    if(arbol == NULL){
        return;
    }
    else{
        MostrarArbol(arbol->der, cont+1);
        for(int i=0; i<cont; i++){
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        MostrarArbol(arbol->izq, cont+1);
    }
}


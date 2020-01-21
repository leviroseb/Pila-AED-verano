#include<iostream>
#include "pila.h"

using namespace std;

int main()
{
    Pila<int> pila1;
    int x,k;

    cout<<"Ingresar numero de elementos: ";
    cin>>x;
    for(int i=0;i<x;i++){
        int d;
        cout<<"Ingresar elemento: ";
        cin>>d;
        pila1.insertar(d);
    }
    while(!pila1.pilaVacia()){
        k=pila1.quitar();
        cout<<k<<" ";
    }
    
}
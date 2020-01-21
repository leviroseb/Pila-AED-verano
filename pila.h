#include<iostream>
using namespace std;

const int tampila=49;
template<typename T>

class Pila
{
    private:
    int cima;
    T listaPila[tampila];
    public:
    Pila(){
        cima=-1;

    }

    void insertar(T elemento);
    T quitar();
    void limpiarPila();
    //operacion de acceso a la pila
    T cimaPila();
    //verificacion de estado de la pila
    bool pilaVacia();
    bool pilaLlena();
};

template<typename T>
void Pila<T>::insertar(T elemento){
    if(pilaLlena())
    {
        throw "Desbordamiento pila";

    }
    cima++;
    listaPila[cima]=elemento;
}

template<typename T>
T Pila<T>::quitar(){
    T aux;
    if(pilaVacia()){
        throw "Pila vacia, no se puede extraer.";

    }
    //guarda elemento de la cima
    aux=listaPila[cima];
    cima--;
    return aux;
}

template<typename T>
T Pila<T>::cimaPila(){
    if(pilaVacia())
    {
        throw "Pila vacia";
    }

    return listaPila[cima];
}

template<typename T>
bool Pila<T>::pilaVacia(){
    return cima==-1;
}

template<typename T>
bool Pila<T>::pilaLlena(){
    return cima==tampila-1;
}

template<typename T>
void Pila<T>::limpiarPila(){
    cima=-1;
}
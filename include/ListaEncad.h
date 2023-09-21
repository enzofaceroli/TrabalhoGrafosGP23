#ifndef LISTAENCAD_H
#define LISTAENCAD_H
#include <iostream>
#include <No.h>

using namespace std;

template<typename T>
class ListaEncad{
    private:
        T* primeiro;
        T* ultimo;
        int tam;
    public:
        T* getPrimeiro();
        T* getUltimo();
        int getTam();

        void insereInicio();
        void insereFinal();

        void removeInicio();
        void removeFinal();
};

#endif
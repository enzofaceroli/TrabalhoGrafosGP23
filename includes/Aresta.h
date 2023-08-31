#ifndef ARESTA_H
#define ARESTA_H
#include "No.h"
#include <iostream> 

using namespace std;

class Aresta {
    private: 
        int peso; 
        int idNoDestino; 
        Aresta* proxAresta; 

    public:
        //Construtor sem parâmetros
        Aresta(); 

        //Construtor com parâmetros
        Aresta(int peso, int idNoDestino, Aresta *getProxAresta); 

        //Destrutor
        ~Aresta(); 

        //Métodos de set
        void setPeso(int peso); 
        void setIdNoDestino(int idNoDestino); 
        void setProxAresta (Aresta *setProxAresta); 

        //Métodos de get
        int getPeso();
        int getIdNoDestino(); 
        Aresta *getProxAresta(); 

        //Outros metodos

};



#endif
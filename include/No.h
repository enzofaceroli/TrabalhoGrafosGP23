#ifndef NO_H
#define NO_H
#include <iostream>
#include "Aresta.h"

using namespace std;

class No {
    private: 
        int idNo; 
        int peso; 
        int grauEntrada;
        int grauSaida; 
        No* proxNo; //Proximo nó na memoria
        Aresta* primeiraAresta; //Ponteiro para lista de arestas

    public: 
        //Construtor sem parâmetro
        No();
        //Construtor com parametros ID, PESO
        No(int idNo, int peso); 
        //Destrutor
        ~No(); 

        //Metodos de set
        void setIdNo(int idNo);
        void setPeso(int peso); 
        void setProxNo(No *p); 
        void setPrimeiraAresta (Aresta *a); 

        //Metodos de get
        int getIdNo();
        int getPeso(); 
        int getGrauEntrada();
        int getGrauSaida();
        No* getProxNo(); 
        Aresta* getPrimeiraAresta(); 

        //Outros metodos
        void aumentaGrauSaida(); 
        void diminuiGrauSaida(); 
        void aumentaGrauEntrada();
        void diminuiGrauEntrada(); 
        
}; 

#endif NO_H
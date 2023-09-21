#ifndef GRAFO_H
#define GRAFO_H
#include "No.h"
#include "Aresta.h"
#include "HashMap.h"
#include "Hashnode.h"
#include "ListaEncad.h"
#include <iostream> 

using namespace std;

struct MyKeyHash {
    unsigned long operator()(const int& k) const
    {
        return k % 10;
    }
};


class Grafo{
    private:
        int ordem; 
        int numeroArestas; 
        bool digrafo; 

        // Mapeia cada nó a sua lista de nós adjacentes
        HashMap<No*, ListaEncad<No*>> * listaAdj;
        // Mapeia cada nó a um indice
        HashMap<No*, int> * indices;
    public:
        //funçoes de grafo 
        Grafo();
        Grafo(int ordem, int numeroArestas, bool digrafo);
        void incrementaOrdem();
        void decrementaOrdem();
    
        //funçoes de no 
        void insereNo(int idNo);
        No* procuraNoPorId(int idNo);
        No* getNoRaiz();
        
        //funçoes de aresta
        void insereAresta(int idNoOrigem, int idNoChegada);
        void removeAresta(int idAresta); 
};
#endif
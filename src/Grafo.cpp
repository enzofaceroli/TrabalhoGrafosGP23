#include "include/Grafo.h"
#include "include/Aresta.h"
#include "include/HashMap.h"
#include "include/Hashnode.h"
#include "include/No.h"   
#include <iostream>

using namespace std; 

Grafo::Grafo(){
    int ordem = 0;
    int numeroArestas = 0;
    bool digrafo = false; 
    
}

Grafo::Grafo(int ordem, int numeroArestas, bool digrafo){
    this->ordem = ordem; 
    this->numeroArestas = numeroArestas;
    this->digrafo = digrafo;

    // Mapeia cada nó a sua lista de nós adjacentes
    this->listaAdj = new HashMap<No*, ListaEncad<No*>> (ordem);
    // Mapeia cada nó a seu indice
    //this->indices = new HashMap<No*, int> (ordem);
}

Grafo::~Grafo(){
    
} 

//Funções de aresta
void Grafo::insereAresta(int idNoSaida, int idNoDestino){
    //acessar o hashindices para achar o no correspondente ao id
    //aumentar grau de saida do no de saida
    //aumentar grau de entrada do no destino
    cout << "Aresta adicionada ao grafo de no ID " << idNoSaida << " para no ID " << idNoDestino << endl;
}

void Grafo::removeAresta(int idNoDestino){
    
    //diminui grau dos dois nos envolvidos
    cout << "Aresta removida com sucesso do no " << idNoDestino << endl;
}
    
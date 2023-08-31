#include "Aresta.h"
#include <iostream> 

using namespace std; 

Aresta::Aresta(){
    this->peso = 0; 
    this->idNoDestino = 0;
    this->proxAresta = NULL; 
}

Aresta::Aresta(int peso, int idNoDestino, Aresta* proxAresta){
    this->peso = peso; 
    this->idNoDestino = idNoDestino; 
    this->proxAresta = proxAresta; 
}

Aresta::~Aresta(){
    //Destrutor
}

void Aresta::setPeso(int peso){
    this->peso = peso; 
}

void Aresta::setIdNoDestino(int idNoDestino){
    this->idNoDestino = idNoDestino;
}

void Aresta::setProxAresta(Aresta *a){
    if(this->proxAresta == NULL){
        this->proxAresta = a;
    } else {
        Aresta *aux = proxAresta;
        this->proxAresta = a;
        a->setProxAresta(aux);
    }
}

int Aresta::getPeso() {
    return this->peso; 
}

int Aresta::getIdNoDestino(){
    return this->idNoDestino; 
}

Aresta* Aresta::getProxAresta(){
    return this->proxAresta; 
}

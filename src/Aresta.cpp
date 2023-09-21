#include "include/Aresta.h"
#include <iostream> 

using namespace std; 

//Construtor sem parâmetros
Aresta::Aresta(){
    this->peso = 0; 
    this->idNoOrigem = 0;
    this->idNoDestino = 0;
    this->proxAresta = NULL; 
}

//Construtor com parâmetros;
Aresta::Aresta(int peso, int idNoDestino){
    this->setPeso(peso);
    this->setIdNoDestino(idNoDestino); 
    this->proxAresta = NULL; 
}

//Destrutor
Aresta::~Aresta(){
    
}

void Aresta::setPeso(int peso){
    this->peso = peso; 
}

void Aresta::setIdNoDestino(int idNoDestino){
    this->idNoDestino = idNoDestino;
}

void Aresta::setIdNoOrigem(int idNoOrigem){
    this->idNoOrigem = idNoOrigem;
}

void Aresta::setProxAresta(Aresta *a){
    if(this->proxAresta == NULL){
        this->proxAresta = a;
    } 
    else {
        Aresta *aux = proxAresta;
        this->proxAresta = a;
        a->setProxAresta(aux);
    }
}

int Aresta::getPeso() {
    return this->peso; 
}

int Aresta::getIdNoOrigem(){
    return this->idNoOrigem;
}

int Aresta::getIdNoDestino(){
    return this->idNoDestino; 
}

Aresta* Aresta::getProxAresta(){
    return this->proxAresta; 
}

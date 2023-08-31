#include "No.h"

using namespace std;

No::No(){
    this->idNo = 0;
    this->peso = 0;
    this->grauEntrada = 0;
    this->grauSaida = 0; 
    this->proxNo = NULL; //Proximo nó na memoria
    this->primeiraAresta = NULL; //Ponteiro para lista de arestas
}

No::No(int idNo, int peso, No* proxNo, Aresta* primeiraAresta){
    this->idNo = idNo;
    this->peso = peso; 
    this->grauEntrada = 0; 
    this->grauSaida = 0;
    this->proxNo = proxNo; // NULL
    this->primeiraAresta = primeiraAresta; // NULL 
}

No::~No(){
    //Destrutor
}

//Metodos de set
void No::setIdNo(int idNo){
    this->idNo = idNo;
}

void No::setPeso(int peso){
    this->peso = peso; 
}

void No::setProxNo(No *p){
    if (this->proxNo == NULL){
        this->proxNo = p;
    } else {
        No *aux = this->proxNo; 
        this->proxNo = p;
        p->setProxNo(aux);
    }
}

void No::setPrimeiraAresta(Aresta *a){
    if (this->primeiraAresta == NULL){
        this->primeiraAresta = a; 
    } else {
        exit(1);
        /*
        Aresta *aux = this->primeiraAresta;
        this->primeiraAresta = a;
        a->setProxAresta(aux); 
        */
    }
}

//Metodos de get
int No::getIdNo(){
    return this->idNo;
}

int No::getPeso(){
    return this->peso; 
}

int No::getGrauEntrada(){
    return this->grauEntrada; 
}

int No::getGrauSaida(){
    return this->grauSaida; 
}

No* No::getProxNo(){
    return this->proxNo; 
}

Aresta* No::getPrimeiraAresta(){
    return this->primeiraAresta; 
}
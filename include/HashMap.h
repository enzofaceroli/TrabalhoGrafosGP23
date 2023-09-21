#ifndef HASHMAP_H
#define HASHMAP_H
#include "HashNode.h"
#include "KeyHash.h"
#include <iostream>

using namespace std;

// template <typename K, size_t tableSize>
// struct KeyHash {
//     unsigned long operator()(const K& key) const
//     {
//         return reinterpret_cast<unsigned long>(key) % tableSize;
//     }
// };

template<typename K, typename V>
class HashMap {
    private:
        HashNode<K,V> **table;
        int tam;
    public:
        HashMap(int tam){
            table = new HashNode<K,V> * [tam]();
        };
        HashMap();

        //Função para achar o no correspondente a key
        V get(const K &key){
            unsigned long hashValue = key % tam;
            HashNode<K,V> *entry = table[hashValue];
            V value; 
            //Percorre a table enquanto ha nós
            while (entry != NULL){
                //Se achar o nó, retorna verdadeiro
                if (entry->getKey() == key){
                    value = entry->getValue();
                    return value;
                }
                entry = entry->getProxNo();
            }
            cout << "No nao encontrado" << endl;
            exit (1); 
        };

        //Função para inserir um par (key, value) na table
        void put(const K &key, V value){
            unsigned long hashValue = key % tam;
            HashNode<K,V> *anterior = NULL;
            HashNode<K,V> *entry = table [hashValue];

            //Percorre a table enquanto existem nós e enquanto a key nao for achada
            while (entry != NULL && entry->getKey != key){
                anterior = entry;
                entry = entry->getProxNo();
            }

            //Se falhar em achar a key, é porque não existe, então cria uma entry (nó) com essa key
            if (entry == NULL) {
                entry = new HashNode<K,V>(key, value);
                if (anterior == NULL){ 
                    //Insere como primeiro bucket
                    table[hashValue] = entry;
                } 
                else {
                    anterior->setProxNo(entry);
                }
            } 
            else {
                entry->setValue(value); 
            }
        };
        void remove(const K &key){
            unsigned long hashValue = key % tam;
            HashNode<K,V> *anterior = NULL;
            HashNode<K,V> *entry = table[hashValue];

            //Percorre a table enquanto existem nós e enquanto a key nao for achada
            while (entry != NULL && entry->getKey() != key){
                anterior = entry;
                entry = entry->getProxNo();
            }

            //Se a key nao ta no hash, nao da pra deletar
            if (entry == NULL){
                cout << "No nao encontrado" << endl; 
                exit (1);
            }

            //Caso quando for deletar o primeiro bucket
            if (anterior == NULL){
                table[hashValue] = entry->getProxNo();
            } 
            else {
                anterior->setProxNo(entry->getProxNo());
            }
            delete entry;
        };    

        bool contemKey(const K &key){
            unsigned long int hashValue = key % tam;
            HashNode<K,V> *entry = table[hashValue];
            while (entry != NULL){
                if(entry->getKey() == key){
                    return true;
                }
                entry = entry->getProxNo();
            }
            return false;
        }
};

#endif
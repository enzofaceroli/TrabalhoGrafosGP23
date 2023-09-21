#ifndef HASHNODE_h
#define HASHNODE_H
#include <iostream> 

using namespace std; 

template<typename K, typename V>
class HashNode{
    private: 
        K key;
        V value;

        HashNode* proxNo;

    public: 
        HashNode<K,V>(K key, V value){
            this-> key = key;
            this-> value = value;
        };
        ~HashNode(){};

        //Setters
        void setValue (V value){
            this->value = value;
        };
        void setProxNo(HashNode* proxNo){
            this->proxNo = proxNo;
        };

        //Getters
        K getKey(){
            return this->key;
        };
        V getValue(){
            return this->value;
        };
        HashNode* getProxNo(){
            return this->proxNo;
        };
}

#endif
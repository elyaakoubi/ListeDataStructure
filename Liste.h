#ifndef LISTE_H
#define LISTE_H

#include "Product.h"
#include <iostream>
using namespace std;

struct Node{
Product* product;
Node* next;

Node(Product* product){
this->product=product;
}
~Node(){
	delete product;
}
};
class Liste
{
    private:
        Node* first;
        int length;
        Node* createNode (Product* product);

    public:
        Liste ();
        ~Liste ();
        Product* getByRef(string);
        bool insertNode(int,Product*);
        void add(string,string,double);
        bool deleteFirst();
        bool deleteNode(int);
        Product* getNode (int);
        void display();
        Product* highPrice();
};
#endif

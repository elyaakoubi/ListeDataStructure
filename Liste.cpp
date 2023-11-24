//using namespace std;

#include "Liste.h"

Liste :: Liste() :  first(NULL),length(0){}

Liste  :: ~Liste ()
{
    Node* del = first;
    while (first){
        first = first -> next;
        delete del;
        del = first;
    }
}

Product* Liste :: getByRef(string ref){
	Node* current=first;
	while(current && current->product->refer!=ref)
	     current=current->next;
	if(!current)
		return NULL;
	return current->product;
} 

Node* Liste :: createNode (Product* product)
{
    Node* node = new Node(product);
    return node;
}

bool Liste :: insertNode (int pos, Product* product)
{
    if (pos < 0 || pos > length){
        cout << "Erreur! La position est invalide." << endl;
        return false;
    }
    Node* newNode = createNode(product);

    //Insertion au début
    if (pos == 0){
        newNode -> next = this->first;
        first = newNode;
    }
    // Insertion au milieu
    else{
        Node* courant = first;
        for (int i = 0; i < pos-1; i++){
            courant = courant -> next;
        }
        newNode -> next = courant -> next;
        courant -> next = newNode;
    }
    length++;
    return true;

}


 void Liste::add(string name,string ref,double price)
 {
 	Product* p = new Product(name,ref,price);
 	insertNode(0,p);
 }
 
bool Liste::deleteFirst(){
	if(first==NULL)
	     return false;
	Node* tmp = first;
	first=first->next;
	delete tmp;
	length--;
	return true;
}

 bool Liste::deleteNode(int n){
 	if( n<0 || n>length-1)
 	   return false;
 	if(n==0)
 	   return deleteFirst();
 	Node* current = first;
 	int i=0;
 	while(i<n-1)
 		{
 			current=current->next;
 			i++;
		 }
 	Node* tmp = current->next;
 	current->next = tmp->next;
 	length--;
 	delete tmp;
 	return true;
 }

void Liste :: display()
{
Node* current=first;
Product* p;
while(current)
    {
    p=current->product;
    cout << p->name << endl;
    current = current ->next;
    }
}

Product* Liste::highPrice(){
	
	if (length == 0) {
        return NULL; // List is empty
    }

    Node* current = first;
    Product* maxProduct = current->product;

    while (current != NULL) {
        if (current->product->price > maxProduct->price) {
            maxProduct = current->product;
        }
        current = current->next;
    }
    
    return maxProduct;
}




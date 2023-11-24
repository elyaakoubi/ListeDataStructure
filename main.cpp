//
#include "Liste.cpp"

int main(){

    Liste* l = new Liste();

    Product* p1 = new Product("name1","ref1",1000);
    Product* p2 = new Product("name2","ref2",2000);
    Product* p3 = new Product("name3","ref3",3000);
    Product* p4 = new Product("name4","ref4",4000);


    l->insertNode(0,p4);
    l->insertNode(0,p3);
	l->insertNode(0,p2);
	l->insertNode(0,p1);

	


  //  l->deleteFirst();

    l->display();
    cout <<".........."<<endl;

 
   Product* php=l->highPrice();
   cout << php->price << endl;

return 0;
}

#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
#include<iostream>
using namespace std;
struct Product{
string name;
string refer;
double price;

    Product(string name,string refer,double price)
    {
    this->name=name;
    this->refer=refer;
    this->price=price;
    }
};
#endif // PRODUCT_H_INCLUDED

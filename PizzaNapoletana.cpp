#include "PizzaNapoletana.h"
PizzaNapoletana::PizzaNapoletana(string name, float price, string size, float slices, float width, bool spicy) : Pizza (name, price, size, slices, width) {

	this->name = name;
	this->price = price;
	this->size = size;
	this->slices = slices;
	this->width = width;
	this->spicy = spicy;
	PizzaNapoletanacount++;
	cout << name << " Pizza created the price is : " << price << " and size : " << size << " The slices are :  " << slices << " and the width is : " << width << " is spicy :  " << spicy << " total is : " << PizzaNapoletanacount << endl;
}

void PizzaNapoletana::Speak() {

	cout << " Spicyyyyyyyyyyyyy " << endl;
}

PizzaNapoletana::~PizzaNapoletana() {
	PizzaNapoletanacount--;
	cout << name << " is done " << " PizzaNapoletanacount is :  " << PizzaNapoletanacount << endl;
}
int PizzaNapoletana::PizzaNapoletanacount = 0;
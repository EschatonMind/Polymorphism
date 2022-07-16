#include "Pizza.h"
Pizza::Pizza(string name, float price, string size, float slices, float width) : Food(name, price, size) {

	this->name = name;
	this->price = price;
	this->size = size;
	this->slices = slices;
	this->width = width;
	Pizzacount++;
	cout << name << " Pizza created the price is : " << price << " and size : " << size << " The slices are :  " << slices << " and the width is : " << width << " total is : " << Pizzacount << endl;
}

void Pizza::Speak() {
	cout << " Yoooooooo " << endl;
}
Pizza::~Pizza(){
	Pizzacount--;
	cout << name << " is done " << " total pizza is :" << Pizzacount << endl;
}
int Pizza::Pizzacount = 0;

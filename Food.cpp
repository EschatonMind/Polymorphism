#include "Food.h"
Food::Food(string name, float price, string size) {

	this->name = name;
	this->price = price;
	this->size = size;
	count++;
	cout << name << " created the price is : " << price << " and size : " << size << " total is : " << count << endl;

}
void Food::Speak() {

	cout << " I'm delicious " << endl;

}
Food::~Food() {

	count--;
	cout << name << " is done " << " total is : " << count << endl;

}
int Food::count = 0;
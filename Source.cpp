#include <iostream>
#include "Food.h"
#include "Pizza.h"
#include "PizzaNapoletana.h"
using namespace std;

int main() {

	cout << " Enter name : " << endl;
	string name;
	cin >> name;
	cout << " Enter Price : " << endl;
	float price;
	cin >> price;
	cout << " Enter Size : " << endl;
	string size;
	cin >> size;
	cout << " Enter Slices : " << endl;
	int slices;
	cin >> slices;
	cout << " Enter width : " << endl;
	float width;
	cin >> width;
	cout << " Enter Spicy : " << endl;
	bool spicy;
	cin >> spicy;
	int n;
	cin >> n;
	
	Food *Pizza1 = new PizzaNapoletana(name, price, size, slices, width, spicy);
	Pizza1->Speak();
	delete Pizza1;

	return 0;
}
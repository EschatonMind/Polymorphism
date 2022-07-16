#pragma once
#include "Pizza.h"
class PizzaNapoletana :public Pizza
{

protected:
	bool spicy;

private:
	static int PizzaNapoletanacount;

public:
	PizzaNapoletana(string name, float price, string size, float slices, float width, bool spicy);
	virtual void Speak();
	virtual ~PizzaNapoletana();

};


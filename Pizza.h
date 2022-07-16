#pragma once
#include "Food.h"
class Pizza :public Food
{

protected:
	int slices;
	float width;

private:
	static int Pizzacount;

public:
	Pizza(string name, float price, string size, float slices, float width);
	virtual void Speak();
	virtual ~Pizza();
};


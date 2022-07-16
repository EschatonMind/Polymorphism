#pragma once
#include <iostream>
using namespace std;
class Food
{

protected:
	string name;
	float price;
	string size;

private:
	static int  count;
	

public:
	 Food(string name, float price, string size);
	 virtual void Speak();
	 virtual ~Food();

};


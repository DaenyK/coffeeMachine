#pragma once
#include "electropribor.h"

class Kofevarka :virtual public ElectroPribor {
protected:
	int timeOfBoiling;
	double amountOfMilk;
	string typeOfCoffee;
public:
	Kofevarka() = default;
	Kofevarka(int n, int m, int time, double milk, string type);

	void show();
	void save();
};

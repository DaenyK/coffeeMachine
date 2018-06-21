#pragma once
#include "Headers.h"

class ElectroPribor {
protected:
	int napr;
	int m;
public:
	ElectroPribor() = default;
	ElectroPribor(int n, int m)
	{
		this->napr = n;
		this->m = m;
	}
	int getNapr() {
		return this->napr;
	}
	int getM() {
		return this->m;
	}
	virtual void show() = 0;
	virtual void save() = 0;
};

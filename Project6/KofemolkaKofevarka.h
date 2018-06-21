#pragma once
#include "kofemolka.h"
#include"kofevarka.h"

class KofemolkaKofevarka :public Kofemolka, public Kofevarka {
private:
	int spoonsOfShugar;
public:
	KofemolkaKofevarka() = default;
	KofemolkaKofevarka(int n, int m, int maxVol, int workTime, string quality, double amount, int timeOfBoiling, double milk, string type, int spoonsOfShugar);	

	void show();
	void save();
};

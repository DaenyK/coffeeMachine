#pragma once
#include "electropribor.h"

class Kofemolka : virtual public ElectroPribor {
protected:
	int maxVolume;
	int time;
	string quality;
	double amount;
public:
	Kofemolka() = default;
	Kofemolka(int n, int m, int maxVol, int time, string quality, double amount);

	void show();
	void save();
};

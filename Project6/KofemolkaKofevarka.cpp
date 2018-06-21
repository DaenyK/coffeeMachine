#include "KofemolkaKofevarka.h"

KofemolkaKofevarka::KofemolkaKofevarka(int n, int m, int maxVol, int workTime, string quality, double amount, int timeOfBoiling, double milk, string type, int spoonsOfShugar)
{
	this->napr = n;
	this->m = m;
	this->maxVolume = maxVol;
	this->time = workTime;
	this->quality = quality;
	this->amount = amount;
	this->timeOfBoiling = timeOfBoiling;
	this->amountOfMilk = milk;
	this->typeOfCoffee = type;
	this->spoonsOfShugar = spoonsOfShugar;
}

void KofemolkaKofevarka::show()
{
	int bckr, t;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
	cout << "информация о кофемашине(кофемолка+кофеварка):" << endl;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	cout << "напряжение: " << napr << " вольт" << endl
		<< "масса: " << m << " кг" << endl
		<< "маскимальная мощность: " << maxVolume << " ватт" << endl
		<< "время работы: " << time << " минут" << endl
		<< "качество прибора: " << quality << endl
		<< "объем в мл: " << amount << " мл" << endl
		<< "время кипения: " << timeOfBoiling << " минут" << endl
		<< "количество молока: " << amountOfMilk << " мл" << endl
		<< "тип кофе: " << typeOfCoffee << endl
		<< "количество ложек сахара: " << spoonsOfShugar << endl << endl;
}

void KofemolkaKofevarka::save()
{
	ofstream  fout("coffee machine.txt");
	if (fout.is_open())
	{
		fout << "напряжение: " << napr << " вольт" << endl
			<< "масса: " << m << " кг" << endl
			<< "маскимальная мощность: " << maxVolume << " ватт" << endl
			<< "время работы: " << time << " минут" << endl
			<< "качество прибора: " << quality << endl
			<< "объем в мл: " << amount << " мл" << endl
			<< "время кипения: " << timeOfBoiling << " минут" << endl
			<< "количество молока: " << amountOfMilk << " мл" << endl
			<< "тип кофе: " << typeOfCoffee << endl
			<< "количество ложек сахара: " << spoonsOfShugar << endl << endl;

		cout << "запись успешно завершена в coffee machine.txt\n";
	}
	else
		cout << "ошибка записи файла\n";
	fout.close();
}

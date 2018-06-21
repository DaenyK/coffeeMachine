#include "kofemolka.h"

Kofemolka::Kofemolka(int n, int m, int maxVol, int time, string quality, double amount)
{
	this->napr = n;
	this->m = m;
	this->maxVolume = maxVol;
	this->time = time;
	this->quality = quality;
	this->amount = amount;
}

void Kofemolka::show()
{
	int bckr, t;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
	cout << "информация о кофемолке:" << endl;
	
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	cout << "напряжение: " << napr <<" вольт"<< endl
		<< "масса: " << m << " кг" <<endl
		<< "маскимальная мощность: " << maxVolume << " ватт" <<endl
		<< "время работы: " << time << " минут" << endl
		<< "качество прибора: " << quality << endl
		<< "объем в мл: " << amount <<" мл"<< endl << endl;
}

void Kofemolka::save()
{
	ofstream  fout("coffee mill.txt");
	if (fout.is_open())
	{
		fout << "напряжение: " << napr << " вольт" << endl
			<< "масса: " << m << " кг" << endl
			<< "маскимальная мощность: " << maxVolume << " ватт" << endl
			<< "время работы: " << time << " минут" << endl
			<< "качество прибора: " << quality << endl
			<< "объем в мл: " << amount << " мл" << endl << endl;

		cout << "запись успешно завершена в файл coffee mill.txt \n";
	}
	else
		cout << "ошибка записи файла\n";
	fout.close();
}

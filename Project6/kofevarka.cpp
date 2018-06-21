#include "kofevarka.h"

Kofevarka::Kofevarka(int n, int m, int time, double milk, string type)
{
	this->napr = n;
	this->m = m;
	this->timeOfBoiling = time;
	this->amountOfMilk = milk;
	this->typeOfCoffee = type;
}

void Kofevarka::show()
{
	int bckr, t;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
	cout << "информация о кофеварке:\n";

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	cout << "напряжение: " << napr <<" вольт" <<endl
		<< "масса: " << m <<" кг"<< endl
		<< "время кипения: " << timeOfBoiling << " минут"<<endl
		<< "количество молока: " << amountOfMilk <<" мл" << endl
		<< "тип кофе: " << typeOfCoffee << endl << endl;
}

void Kofevarka::save()
{
	ofstream  fout("coffee maker.txt");
	if (fout.is_open())
	{
		fout << "напряжение: " << napr << " вольт" << endl
			<< "масса: " << m << " кг" << endl
			<< "время кипения: " << timeOfBoiling << " минут" << endl
			<< "количество молока: " << amountOfMilk << " мл" << endl
			<< "тип кофе: " << typeOfCoffee << endl << endl;

		cout << "запись успешно завершена в файл coffee maker.txt\n";
	}
	else
		cout << "ошибка записи файла\n";
	fout.close();
}

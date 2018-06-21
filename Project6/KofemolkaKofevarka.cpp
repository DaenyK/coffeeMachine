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
	cout << "���������� � ����������(���������+���������):" << endl;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	cout << "����������: " << napr << " �����" << endl
		<< "�����: " << m << " ��" << endl
		<< "������������ ��������: " << maxVolume << " ����" << endl
		<< "����� ������: " << time << " �����" << endl
		<< "�������� �������: " << quality << endl
		<< "����� � ��: " << amount << " ��" << endl
		<< "����� �������: " << timeOfBoiling << " �����" << endl
		<< "���������� ������: " << amountOfMilk << " ��" << endl
		<< "��� ����: " << typeOfCoffee << endl
		<< "���������� ����� ������: " << spoonsOfShugar << endl << endl;
}

void KofemolkaKofevarka::save()
{
	ofstream  fout("coffee machine.txt");
	if (fout.is_open())
	{
		fout << "����������: " << napr << " �����" << endl
			<< "�����: " << m << " ��" << endl
			<< "������������ ��������: " << maxVolume << " ����" << endl
			<< "����� ������: " << time << " �����" << endl
			<< "�������� �������: " << quality << endl
			<< "����� � ��: " << amount << " ��" << endl
			<< "����� �������: " << timeOfBoiling << " �����" << endl
			<< "���������� ������: " << amountOfMilk << " ��" << endl
			<< "��� ����: " << typeOfCoffee << endl
			<< "���������� ����� ������: " << spoonsOfShugar << endl << endl;

		cout << "������ ������� ��������� � coffee machine.txt\n";
	}
	else
		cout << "������ ������ �����\n";
	fout.close();
}

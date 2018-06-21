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
	cout << "���������� � ���������:\n";

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	cout << "����������: " << napr <<" �����" <<endl
		<< "�����: " << m <<" ��"<< endl
		<< "����� �������: " << timeOfBoiling << " �����"<<endl
		<< "���������� ������: " << amountOfMilk <<" ��" << endl
		<< "��� ����: " << typeOfCoffee << endl << endl;
}

void Kofevarka::save()
{
	ofstream  fout("coffee maker.txt");
	if (fout.is_open())
	{
		fout << "����������: " << napr << " �����" << endl
			<< "�����: " << m << " ��" << endl
			<< "����� �������: " << timeOfBoiling << " �����" << endl
			<< "���������� ������: " << amountOfMilk << " ��" << endl
			<< "��� ����: " << typeOfCoffee << endl << endl;

		cout << "������ ������� ��������� � ���� coffee maker.txt\n";
	}
	else
		cout << "������ ������ �����\n";
	fout.close();
}

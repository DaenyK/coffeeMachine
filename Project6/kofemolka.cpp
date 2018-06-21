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
	cout << "���������� � ���������:" << endl;
	
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	cout << "����������: " << napr <<" �����"<< endl
		<< "�����: " << m << " ��" <<endl
		<< "������������ ��������: " << maxVolume << " ����" <<endl
		<< "����� ������: " << time << " �����" << endl
		<< "�������� �������: " << quality << endl
		<< "����� � ��: " << amount <<" ��"<< endl << endl;
}

void Kofemolka::save()
{
	ofstream  fout("coffee mill.txt");
	if (fout.is_open())
	{
		fout << "����������: " << napr << " �����" << endl
			<< "�����: " << m << " ��" << endl
			<< "������������ ��������: " << maxVolume << " ����" << endl
			<< "����� ������: " << time << " �����" << endl
			<< "�������� �������: " << quality << endl
			<< "����� � ��: " << amount << " ��" << endl << endl;

		cout << "������ ������� ��������� � ���� coffee mill.txt \n";
	}
	else
		cout << "������ ������ �����\n";
	fout.close();
}

#include"KofemolkaKofevarka.h"

int main() {
	short a;
	setlocale(LC_ALL, "russian");
	Kofemolka coffeeMill(500, 2, 200, 8, "�������", 550);
	Kofevarka coffeeMaker(650, 3, 12, 80.5, "�����");
	KofemolkaKofevarka coffeeMachine(440, 5, 220, 6, "�������", 620.5, 9, 120, "���������", 2);

	coffeeMill.show();
	coffeeMaker.show();
	coffeeMachine.show();

	cout << "������ ��������� ������ � �����?1 - �� / 0 - �����";cin >> a;
	switch (a) {
	case 1: {
		coffeeMill.save();
		coffeeMaker.save();
		coffeeMachine.save();
	}break;

	case 0: {
		exit(1);
	}break;

	}
	system("pause");
	return 0;
}
#include"KofemolkaKofevarka.h"

int main() {
	short a;
	setlocale(LC_ALL, "russian");
	Kofemolka coffeeMill(500, 2, 200, 8, "высокое", 550);
	Kofevarka coffeeMaker(650, 3, 12, 80.5, "латте");
	KofemolkaKofevarka coffeeMachine(440, 5, 220, 6, "высокое", 620.5, 9, 120, "американо", 2);

	coffeeMill.show();
	coffeeMaker.show();
	coffeeMachine.show();

	cout << "хотите сохранить данные в файлы?1 - да / 0 - выход";cin >> a;
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
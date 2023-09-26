#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int a; cout << "Укажите балл в 5-ти бальной системе: "; cin >> a;
	if (a < 0) {
		cerr << "Ошибка: оценка должна быть больше нуля" <<
			endl;
		return 1;
	}
	switch (a) {
	case 0: 
	case 1: 
	case 2: cout << "Хуже среднего" << endl; break;
	case 3: cout << "Средне" << endl; break;
	case 4: cout << "Хорошо" << endl; break;
	case 5: cout << "Отлично" << endl; break;
	default: { cerr << "Ошибка: максимальная оценка - 5" << endl;
		return 1;
	}
	}
}

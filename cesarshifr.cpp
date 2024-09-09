#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	while (true) {
		int size;
		cout << endl; // Вводим длину строки
		cin >> size;
		cout << endl; // Вводим величину сдвига 
		int shift;
		cin >> shift; // Вводим строку без пробелов
		cout << endl;
		char* line = new char[size];
		for (int i = 0; i < size; ++i) {
			cin >> line[i]; // Задаем размер массива 
		}
		cout << endl;
		char* res = new char[size];
		int operation; // Вводим шифр Цезаря как переменную
		cin >> operation; // Вводим значения для шифра
		if (operation == 3) {
			break;
		}
		if (operation == 2) {
			shift *= -1;
		}
		for (int i = 0; i < size; ++i) {
			res[i] = line[i] + shift;
			if (line[i] >= 'a' && line[i] <= 'z') {
				if (res[i] < 'a') {
					res[i] = 'z' - ('a' - res[i] - 1);
				}
				if (res[i] > 'z') {
					res[i] = 'a' + (res[i] - 'z' - 1);
				}
			}
			else if (line[i] >= 'A' && line[i] <= 'Z') {
				if (res[i] < 'A') {
					res[i] = 'Z' - ('A' - res[i] - 1);
				}
			}
		}
		for (int i = 0; i < size; ++i) {
			cout << res[i];
		}
		cout << endl;
		delete[] line;
		delete[] res;
	}
	return 0;
}

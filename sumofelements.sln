#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char line[] = { "AaBbCcDdEeFfGgggggg" };
	int size = sizeof(line) / sizeof(line[0]);
	int count = 0;
	for (int i = 0; i < size; ++i) {
		if (line[i] >= '0' && line[i] <= '100') {
			++count;
		}
	}
	cout << count;
	return 0;
}

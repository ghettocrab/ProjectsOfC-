#include <iostream>
using namespace std;

int Add(int a, int b) {
	int sum = a + b;
	return sum;
}
int main(int, char* []) {
	int a;
	cin >> a;
	int b;
	cin >> b;
	int result = Add(a, b);
	cout << result << endl;
	return 0;
}

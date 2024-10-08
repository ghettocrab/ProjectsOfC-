#include <iostream>
using namespace std;

int* returnLocalVar(int* pa) {
	cin >> *pa;
	return pa;
}
int main() {
	int a = 9;
	int* ptr_a = returnLocalVar(&a);
	cout << a << endl;
	cout << *ptr_a << endl;
	return 0;
}
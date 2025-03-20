#include<iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter two non-negative numbers ";
	cin >> a >> b;
	int max = (a > b) ? a : b;
	cout << "The largest number: " << max;
	return 0;
}
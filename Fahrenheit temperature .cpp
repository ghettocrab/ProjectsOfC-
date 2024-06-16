#include <iostream>
using namespace std;

int main()
{
	float C, F;
	cout << "Enter the Celsius temperature =";
	cin >> C;
	F = (C * 9.0) / 5.0 + 32.0;

	cout << " Fahrenheit temperature : " << F << endl;

	return 0;
}
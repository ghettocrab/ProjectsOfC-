#include<iostream>
using namespace std;

int Add(int a, int b) {
	return a + b;
}
int Substitute(int a, int b) {
	return a - b;
}
int Divide(int a, int b) {
	return a / b;
}
int Multiply(int a, int b) {
	return a * b;
}
int Factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * Factorial(n - 1);
}
int Power(int base, int power) {
	if (power != 0) {
		return(base * Power(base, power - 1));
	}
	else {
		return 1;
	}
}
int main() {
	while (true) {
		char op;
		int num1, num2;
		cout << "Enter an operator +(addition) -(subtraction) /(dividation) *(multiplication) !(factorial) ^(degree conversation)" << endl;
		cin >> op;

		if (op == '!') {
			break;
		}
		if (op == '!') {
			cout << "Enter a number to calculate the factorial: ";
			cin >> num1;
		}
		else {
			cout << "Enter two numbers" << endl;
			cin >> num1;
			cin >> num2;
		}
		switch (op){
		case '+':
			cout << "Result of addition:" << Add(num1, num2) << endl;
			break;
		case '-':
			cout << "Result of subtraction: " << Substitute(num1, num2) << endl;
			break;
		case'/':
			if (num2 == 0) {
				cout << "You can't divide by zero" << endl;
				break;
			}
			cout << "Result of dividation: " << Divide(num1, num2) << endl;
			break;
		case '*':
			cout << "Result of multiplication" << Multiply(num1, num2) << endl;
			break;
		case'!':
		{
			int factorial = Factorial(num1);
			cout << "Factorial of a number: " << num1 << " = " << factorial << endl;
		}
			break;
		case'^':
		{
			float power = Power(num1, num2);
			cout << "Degree result: " << power << endl;
		}
		break;
		default: 
			cout << "Incorrect operator" << endl;
			break;
		}
	}
	return 0;
}
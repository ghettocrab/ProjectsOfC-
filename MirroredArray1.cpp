﻿#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int size = 3;
	int* a = new int[size];
	for (int i = 0; i < size; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < size / 2; i++)
	{
		int n = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = n;
	}
	for (int i = 0; i < size; ++i)
	{
		cout << a[i];
	}
	return 0;
}
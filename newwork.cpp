#include <iostream>
using namespace std;

int main() 
{
  int a, b;
  cout << "Введите два неотрицательных числа: ";
  cin >> a >> b;
  int max;
  cout << "Наибольшее число: " << max;

  if (a < b)
  {
    cout << a << endl;
  }
  else
  {
    cout << b << endl;
  }

  return 0;
}

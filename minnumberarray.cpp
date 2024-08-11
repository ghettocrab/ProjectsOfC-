#include <iostream>
using namespace std;
int main()
{
  int arr[] = {5, 4, 3, 4, 9};
  int arrayLength = sizeof(arr) / sizeof(arr[0]);
  int minimum = arr[0];
  for (int i = 0; i < arrayLength; ++i)
  {
    if (arr[i] < minimum) {
      minimum = arr[i];
    }
  }
  cout << minimum;
  return 0;
}
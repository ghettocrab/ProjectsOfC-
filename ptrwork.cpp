#include <iostream>
using namespace std;

int main() {
   int num1 = 5;
   int num2 = 3;
   int* num1_ptr = &num1;
   int* num2_ptr = &num2;
   int result = num1 * num2;
   int *num3_ptr;
   num3_ptr = &result;

   cout << num3_ptr << endl;
   
   return 0;
}

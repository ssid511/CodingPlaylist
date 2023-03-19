#include <iostream>
using namespace std;

int main() {
  int num, product = 1, digit;
  cout << "enter a number";
  cin >> num;

  while(num != 0) {
    digit = num % 10;
    product *= digit;
    num /= 10;
  }

  cout << "Product of digits in the no is" << product << endl;
  
  
  return 0;
}

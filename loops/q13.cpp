#include <iostream>
using namespace std;

int main() {
  int num, reversed = 0, digit, original;
  cout << "enter a no";
  cin >> num;
  original = num;

  while(num != 0) {
    digit = num % 10;
    reversed = (reversed * 10) + digit;
    num /= 10;
  }

  if(original == reversed) {
    cout << "number is a palindrome" << endl;
  } else {
    cout << "number is not a palindrome" << endl;
  }

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int num, square, original;
  cout << "enter a no";
  cin >> num;

  square = num * num;
  original = num;

  while(num > 0) {
    if(num % 10 != square % 10) {
      cout << "no. is not an Automorphic no" << endl;
      return 0;
    }
    num /= 10;
    square /= 10;
  }

  cout << "no. is an Automorphic no" << endl;

  
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int num, count = 0;
  cout << "enter a number ";
  cin >> num;

  while(num != 0) {
    count++;
    num /= 10;
  }

  cout << "Total digits in the number are " << count << endl;

  
  return 0;
}

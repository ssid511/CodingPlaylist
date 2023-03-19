#include <iostream>
using namespace std;

int main() {
  int num1, num2, i, hcf;
  cout << "enter two no";
  cin >> num1 >> num2;

  for(i = 1; i <= num1 && i <= num2; ++i) {
    if(num1 % i == 0 && num2 % i == 0) {
      hcf = i;
    }
  }

  cout << "HCF is " << hcf << endl;

  
  return 0;
}

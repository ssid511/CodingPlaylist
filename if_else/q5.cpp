#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number";
    cin >> num;
    if (48 % num == 0) {
        cout << num << " is a factor of 48"<<endl;
    } else {
        cout << num << " is not a factor of 48"<<endl;
    }


    
    return 0;
}

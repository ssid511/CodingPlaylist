#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a no. ";
    cin >> num;
    if (num < 0) {
        cout << "Negative number"<<endl;
    } else {
        cout << "Positive number"<<endl;
    }
    return 0;
}

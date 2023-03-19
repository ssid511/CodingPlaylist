#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a n0.  ";
    cin >> n;

    if (n > 20) {
        cout << "Square of the given n0. " << n << " is " << n*n << endl;
    }
    else {
        cout << "Cube of the given n0. " << n << " is " << n*n*n << endl;
    }



    return 0;
}

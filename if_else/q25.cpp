#include <iostream>
using namespace std;

int main() {
    int current_reading, last_reading, UnitConsumed;
    float PerunitRate, BillAmount;

     
    cout << "Enter the current reading ";
    cin >> current_reading;
    cout << "Enter the last month reading ";
    cin >> last_reading;

    UnitConsumed = current_reading - last_reading;

    if (UnitConsumed <= 200) {
        PerunitRate = 4.50;
    } 
    else if (UnitConsumed <= 500) {
        PerunitRate = 6.00;
    } 
    else if (UnitConsumed <= 1000) {
        PerunitRate = 9.00;
    } 
    else {
        PerunitRate = 15.00;
    }

    BillAmount = UnitConsumed * PerunitRate;

    cout << "Units consumed " << UnitConsumed << endl;
    cout << "Rate per unit Rs " << PerunitRate << endl;
    cout << "Bill amount Rs " << BillAmount << endl;

    return 0;
}

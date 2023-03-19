#include <iostream>
using namespace std;

int main() {
    int BasicSalary;
    double Hra, da, Grosssalary;
    cout << "Enter basic salary: ";
    cin >> BasicSalary;
    if (BasicSalary < 1500) {
        Hra = 0.1 * BasicSalary;
        da = 0.9 * BasicSalary;
    } else {
        Hra = 500;
        da = 0.98 * BasicSalary;
    }
    Grosssalary = BasicSalary + Hra + da;
    cout << "Gross salary: " << Grosssalary << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float amount, time, currInterestRate, interest, TotalAmount;
 
    cout << "Enter the amount deposited: ";
    cin >> amount;
    cout << "Enter the time in years of depositing: ";
    cin >> time;

     if (time <= 5) {
        currInterestRate = 6.5;
    } 
    
    else if (time <= 10) {
        currInterestRate = 9.0;
    } 
    
    else if (time <= 20) {
        currInterestRate = 12.0;
    } 
    
    else {
        currInterestRate = 18.0;
    }
 
    interest = amount * (currInterestRate / 100) * time;
    TotalAmount = amount + interest;
 
    cout << "Interest earned- Rs " << interest << endl;
    cout << "Amount received after " << time << " years Rs " << TotalAmount << endl;




    return 0;
}

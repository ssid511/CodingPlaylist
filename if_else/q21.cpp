#include <iostream>

using namespace std;

int main() {
    int day;

    cout << "Enter a number from 1 to 7: ";
    cin >> day;

    if (day == 1) {
        cout << "Sunday" << endl;
    } 
    
    else if (day == 2) {
        cout << "Monday" << endl;
    } 
    
    else if (day == 3) {
        cout << "Tuesday" << endl;
    } 
    
    else if (day == 4) {
        cout << "Wednesday" << endl;
    } 
    
    else if (day == 5) {
        cout << "Thursday" << endl;
    } 
    
    else if (day == 6) {
        cout << "Friday" << endl;
    } 
    
    else if (day == 7) {
        cout << "Saturday" << endl;
    } 
    
    else {
        cout << "Invalid input enter no.from 1 to 7" << endl;
    }



    return 0;
}

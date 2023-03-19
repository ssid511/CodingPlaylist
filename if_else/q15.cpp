#include <iostream>
using namespace std;

int main() {
    int feet1, inches1, feet2, inches2; 
    int Totalfeet, Totalinches;
    
    cout << "enter 1st dist. in feet and inches ";
    cin >> feet1 >> inches1;

    cout << "Enter 2nd dist. in feet and inches ";
    cin >> feet2 >> inches2;

    Totalinches = inches1 + inches2;
    
    Totalfeet = feet1 + feet2 + Totalinches / 12;
    
    Totalinches = Totalinches % 12;

    cout << "total distance: " << Totalfeet << " feet " << Totalinches << " inches"<<endl;
    



    return 0;
}

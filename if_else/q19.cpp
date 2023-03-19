#include <iostream>

using namespace std;

int main()
{
    int marks[5], total = 0;
    float percentage;

    cout << "enter the marks of 5 subject out of 100"<<endl;

     for(int i=0; i<5; i++)
    {
        cout << "enter marks for subject " << i+1<< " ";
        cin >> marks[i];
        total += marks[i];
    }
    percentage = (float) total / 5;

    // for grade here
    char grade;
    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 75)
        grade = 'B';
    else if(percentage >= 60)
        grade = 'C';
    else if(percentage >= 33)
        grade = 'D';
    else
        grade = 'E';

    cout << "Percentage " << percentage << endl;
    cout << "Grade " << grade << endl;

    
}

#include <iostream>
using namespace std;

int main() {
   float basicSalary, DearnessAllowance, HouseRentAll;
     float Providentfd, Insurance, monthlySalary, annualSalary, tax;
   cout << "enter the basic salary ";
   cin >> basicSalary;

   DearnessAllowance = 0.115 * basicSalary;
   
   HouseRentAll = 0.25 * basicSalary;
   Providentfd = 0.1 * basicSalary;
   Insurance = 0.12 * basicSalary;

   monthlySalary = basicSalary + DearnessAllowance + HouseRentAll - Providentfd - Insurance;

   annualSalary = 12 * monthlySalary;

   if (annualSalary <= 250000) {
      tax = 0;
   }
   else if (annualSalary > 250000 && annualSalary <= 500000) {
      tax = 0.1 * (annualSalary - 250000);
   }
   else if (annualSalary > 500000 && annualSalary <= 1000000) {
      tax = 0.1 * 250000 + 0.2 * (annualSalary - 500000);
   }
   else {
      tax = 0.1 * 250000 + 0.2 * 500000 + 0.3 * (annualSalary - 1000000);
   }

   cout << "Monthly Salary = Rs" << monthlySalary << endl;
   cout << "Annual Salary = Rs" << annualSalary << endl;
   cout << "Income Tax to pay = Rs" << tax << endl;

   return 0;
}

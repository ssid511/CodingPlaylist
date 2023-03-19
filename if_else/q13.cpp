#include <iostream>

using namespace std;

int main() {
   float angle1, angle2, angle3, sum;

   cout << "Enter the angles of the triangle  ";
   cin >> angle1 >> angle2 >> angle3;

   sum = angle1 + angle2 + angle3;

   if(sum == 180) {
      cout << "triangle is valid" << endl;
   } else {
      cout << " triangle is not valid" << endl;
   }



   return 0;
}

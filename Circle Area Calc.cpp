#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
   cout << "Please Enter Radius:";
   double radius;
   cin >> radius;

   double area = 3.14159 * (pow(radius,2) );
   cout <<"Area of this circle is: " << area;
   return 0;
}

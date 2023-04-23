#include <iostream>
#include <cmath>


int main() {
   cout << "Please Enter Fahrenheit Value:";
   double fahrenheit;
   cin >> fahrenheit;

   double celsius = (fahrenheit - 32) / 1.8;
   cout << fahrenheit << " In Celsius is: " << celsius;
   return 0;
}

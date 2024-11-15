#include <iostream>
using namespace std;

int main()
{
  float fahrenheit, celsius;

  // Prompt user for input
  cout << "Enter the temperature in Fahrenheit: ";
  cin >> fahrenheit;

  // Conversion formula
  celsius = (fahrenheit - 32) * 5 / 9;

  // Output the result
  cout << "Equivalent Temperature in Celsius: " << celsius << endl;
}
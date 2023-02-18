#include <iostream>
#include <math.h>

using namespace std;

const double PI = 3.1415926535;

int main() {
  // Exercise 5-1
  const float celsius = 220.0;
  const float fahrenheit = (9.0 / 5.0 * celsius) + 32;
  cout << "Celsius: " << celsius << " to Fahrenheit: " << fahrenheit << endl;

  // Exercise 5-2
  const float radius = 4;
  const float volume = (4.0 / 3.0 * PI * pow(radius, 3.0));
  cout << "Radius: " << radius << " to Volume: " << volume << endl;

  // Exercise 5-3
  const short int width = 400;
  const short int height = 200;
  const short int perimeter = (width * 2) + (height * 2);
  cout << "Width: " << width << ", Height: " << height << " Perimeter: " << perimeter << endl;

  // Exercise 5-4
  const double kilometers = 200;
  const double miles = kilometers *  0.6213712;
  cout << "Kilometers: " << kilometers << " to Miles: " << miles << endl;

  // Exercise 5-5
  cout << "Give me hours!!!!: ";
  short int hours;
  cin >> hours;
  cout << "Give me minutes!!!: ";
  short int minutes;
  cin >> minutes;
  cout << "Total: " << hours * 60 + minutes << " minutes!!!!" << endl;;


  // Exercise 5-6
  cout << "Give me minutes!!!: ";
  cin >> minutes;
  hours = minutes / 60;
  cout << "Total Minutes: " << minutes << " to Hours: " << hours << " & Minutes: " << minutes - (hours * 60) << endl;


}

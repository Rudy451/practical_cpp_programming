#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

  // Exercise 6-1
  short int score;
  /*cout << "Enter score for grade: ";
  cin >> score;

  if(score < 101 && score >= 90) {
    cout << "A" << endl;
  } else if(score < 90 && score >= 80) {
    cout << "B" << endl;
  } else if (score < 80 && score >= 70) {
    cout << "C" << endl;
  } else if (score < 70 && score >= 60) {
    cout << "D" << endl;
  } else if(score < 60 && score >= 0) {
    cout << "F" << endl;
  } else {
    cout << "Invalid entry" << endl;
  }*/
  // Exercise 6-2
  /*short int modulo_value;
  string grade;
  cout << "Enter score for grade: ";
  cin >> score;
  modulo_value = score % 10;

  if(modulo_value > 0 && modulo_value < 3) {
    grade = "-";
  } else if (modulo_value == 0 || modulo_value > 8) {
    grade = "+";
  } else {
    grade = "";
  }

  if(score < 101 && score >= 90) {
    cout << "A" << grade << endl;
  } else if(score < 90 && score >= 80) {
    cout << "B" << grade << endl;
  } else if (score < 80 && score >= 70) {
    cout << "C" << grade << endl;
  } else if (score < 70 && score >= 60) {
    cout << "D" << grade << endl;
  } else if(score < 60 && score >= 0) {
    cout << "F" << endl;
  } else {
    cout << "Invalid entry" << endl;
  }*/

  // Exercise 6-3
  /*double change;
  cout << "Enter change amount: ";
  cin >> change;

  while(change > 0.01) {
    if(change - 0.25 >= 0) {
      cout << "Quarter" << endl;
      change -= 0.25;
    } else if(change - 0.10 >= 0.0) {
      cout << "Dime" << endl;
      change -= 0.10;
    } else if(change - 0.05 >= 0.0) {
      cout << "Nickel" << endl;
      change -= 0.05;
    } else {
      cout << "Penny" << endl;
      change -= 0.01;
    }
  }

  // Exercise 6-4
  short int year;
  cout << "Enter to check for Leap Year: ";
  cin >> year;

  cout << ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? "Leap Year" : "Not Leap Year") << endl;*/

  // Exercise 6-5
  float pay_rate;
  float hours;

  cout << "Enter employee pay rate: ";
  cin >> pay_rate;
  cout << "Enter hours worked: ";
  cin >> hours;

  cout << "Total Pay: " << (hours > 40.0 ? (40.0 * pay_rate) + ((hours - 40.0) * (pay_rate * 1.5)) : hours * pay_rate)  << endl;

  return 0;
}

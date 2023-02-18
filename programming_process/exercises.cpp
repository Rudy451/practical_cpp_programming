#include <iostream>
#include <string>
#include <math.h>
#include <cctype>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
  // Exercise 7-1
  /*
              American Metrics
    An English Units to Metric Units Length Converter
        Primary User's Specification
            04/16/2022 Dane Johnson            */

  /*user inputs value & units
    loop:
      check units
      output converted value and units
      check if they want to continue
  */
  /*short int value;
  string units;
  string check = "Yes";

  while(tolower(check.at(0)) == 'y') {
    cout << "Please amount && english unit for conversion, e.g. 10 meters: ";
    cin >> value >> units;
    if(units == "meters") {
      cout << value * 3.281 << " feet." << endl;
    } else if(units == "millimeters") {
      cout << value * 0.039 << " inches." << endl;
    } else if(units == "grams") {
      cout << value * 0.035 << " ounces." << endl;
    } else if(units == "kilograms") {
      cout << value * 2.204 << " pounds." << endl;
    } else {
      cout << "Sorry, I don't know that one...." << endl;
    }
    cout << "Continue? (Y/N): ";
    cin >> check;
  }*/

  // Exercise 7-2
  /*          What's the Difference???
            A date difference calculator
            Primary User's Specification
              04/16/2022 Dane Johnson           */

  /*
    Use slash index[1] to check if month is before october
    yes means reset string with 0 prepended
    Use slash index[5] to check if day is before the tenth
    yes means reset string with 0 at index

    loop through both dates
      check for month, apply operator, convert to days & add to total
      check for days, apply operator & add to total
      check for years, apply operator & add to total
  */
  /*string date_one;
  string date_two;
  int total;
  cout << "Enter first date, e.g., 1/1/90: ";
  cin >> date_one;
  cout << "Enter second date, e.g., 1/1/90: ";
  cin >> date_two;

  if(date_one[1] == '/') {
    date_one = '0' + date_one;
  }

  if(date_two[1] == '/') {
    date_two = '0' + date_two;
  }

  if(date_one[4] == '/') {
    date_one = date_one.substr(0, 3) + '0' + date_one.substr(3);
  }

  if(date_two[4] == '/') {
    date_two = date_two.substr(0, 3) + '0' + date_two.substr(3);
  }

  for(int i = 0; i < date_one.length(); i = i + 3) {
    short int date_one_num = stoi(date_one.at(0) == '0' ? date_one.substr(i, i + 2) : date_one.substr(i, i+2));
    short int date_two_num = stoi(date_two.at(0) == '0' ? date_two.substr(i, i + 2) : date_two.substr(i, i+2));
    if(i == 0){
      total += (date_one_num > date_two_num ? date_one_num - date_two_num : (date_one_num - date_two_num + 7) * -1) * 30;
    } else if(i == 3) {
      total += date_one_num > date_two_num ? date_one_num - date_two_num : (date_one_num - date_two_num + 30);
    } else {
      total += (date_one_num - date_two_num) * 365 * -1;
    }
  }
  cout << "Difference: " << total << " days." << endl;*/

  // Exercise 7-3
  /*unsigned long int bytes;
  cout << "Enter bytes total for file transmission time in MB: ";
  cin >> bytes;
  cout << "File transmission time: " << (bytes * 1000000 / 960 / 60 / 60 / 24) << " days." << endl;*/

  // Exercise 7-4
  /*float sales_total;
  cout << "Please enter total for sales tax calculation: ";
  cin >> sales_total;
  cout << "Sales Total (w/ Sales Tax): " << fixed << setprecision(2) << (sales_total *= 1.08) << endl;*/

  // Exercise 7-5
  /*short int num;
  bool result;
  for(int num = 0; num < 100; ++num){
    result = num == 2 || num > 2 && num % 2 != 0;
    if(result) {
      for(int i = 2; i <= sqrt(num); ++i) {
        if(num % i == 0){
          result = false;
          break;
        }
      }
    }
    if(result){
      cout << num << endl;
    }
  }*/

  // Exercise 7-6
  /*vector<int> num_list{-1, 2, -3, 4, 45, -100, 5, -80, 56, 10, -2, 100, 80};
  short int neg_total = 0;
  short int pos_total = 0;

  for(int i = 0; i < num_list.size(); ++i) {
    if(num_list[i] > 0) {
      ++pos_total;
    } else {
      ++neg_total;
    }
  }

  cout << "Total negatives: " << neg_total << endl;;
  cout << "Total positives: " << pos_total << endl;*/
}

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {
  // Exercise 8-1
  /*for(int i = 0; i < 9; ++i) {
    for(int j = 0; j < 13; ++j) {
      if(j == 0 || j == 6 || j == 12) {
        cout << ((i == 0 || i == 4 || i == 8) ? "+" : "|");
      } else {
        cout << ((i == 0 || i == 4 || i == 8) ? "-" : " ");
      }
    }
    cout << endl;
  }
  cout << endl;*/

  // Exercise 8-2
  /*float total;

  while(true) {
    float resistor;
    cout << "Please enter resistor value for total: ";
    cin >> resistor;
    if(resistor == 0) {
      break;
    } else {
      total += (1 / resistor);
    }
  }

  cout << "Total Resistance: " << (1 / total) << endl;*/

  // Exercise 8-3
  /*int total;
  int count;
  cout << "Enter how many numbers you would like to enter in the average: ";
  cin >> count;

  total = 0;
  for(int i = 0; i < count; ++i) {
    int number;
    cout << "Enter a number to include in the average: ";
    cin >> number;
    total += number;
  }
  cout << "Average: " << (total / count) << endl;*/

  // Exercise 8-4
  /*int number;
  cout << "Enter a number whose multiplication table you would like: ";
  cin >> number;

  for(int i = 0; i < 11; ++i) {
    cout << number << " x " << i << " = " << number * i << endl;
  }*/

  // Exercise 8-5
  /*char letter;
  while(true) {
    cout << "Enter a letter to determine whether it's a consonant or vowel: ";
    cin >> letter;
    switch(letter) {
      case 'a':
        cout << "vowel" << endl;
        break;
      case 'e':
        cout << "vowel" << endl;
        break;
      case 'i':
        cout << "vowel" << endl;
        break;
      case 'o':
        cout << "vowel" << endl;
        break;
      case 'u':
        cout << "vowel" << endl;
        break;
      case 'y':
        cout << "vowel" << endl;
        break;
      default:
        cout << "consonant" << endl;
    }
  }*/

  // Exercise 8-6 && Exercise 8-7
  /*string number;
  cout << "Enter a number for string conversion: ";
  cin >> number;
  if(number.length() == 2 && number[0] == '1') {
    switch(number[1]) {
      case '0':
        cout << "ten";
        break;
      case '1':
        cout << "eleven";
        break;
      case '2':
        cout << "twelve";
        break;
      case '3':
        cout << "thirteen";
        break;
      case '4':
        cout << "fourteen";
        break;
      case '5':
        cout << "fifteen";
        break;
      case '6':
        cout << "sixteen";
        break;
      case '7':
        cout << "seventeen";
        break;
      case '8':
        cout << "eighteen";
        break;
      case '9':
        cout << "nineteen";
        break;
    }
  } else {
    for(int i = 0; i < number.length(); ++i) {
      switch(number[i]) {
        case '0':
          cout << (number == "100" ? "" : "zero ");
          break;
        case '1':
          cout << (i == 0 && number.length() > 1 ? "one hundred" : "one ");
          break;
        case '2':
          cout << (i == 0 ? "twenty " : "two ");
          break;
        case '3':
          cout << (i == 0 ? "thirty " : "three ");
          break;
        case '4':
          cout << (i == 0 ? "forty " : "four ");
          break;
        case '5':
          cout << (i == 0 ? "fifty " : "five ");
          break;
        case '6':
          cout << (i == 0 ? "sixty " : "six ");
          break;
        case '7':
          cout << (i == 0 ? "seventy " : "seven ");
          break;
        case '8':
          cout << (i == 0 ? "eighty " : "eight ");
          break;
        case '9':
          cout << (i == 0 ? "ninety " : "nine ");
          break;
        default:
          assert("Internal error: NAN");
          break;
      }
    }
  }
  cout << endl;*/
}

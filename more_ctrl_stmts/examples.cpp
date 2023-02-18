#include <iostream>

using namespace std;

int total;
int current;
int counter;

int seven_count;
int my_data[5];
int three_count;
int the_index;

int result;
char oper_char;
int value;

int main() {

  // Example 8-1
  /*while(counter < 5) {
    cout << "Number? ";
    cin >> current;
    ++counter;
    total += current;
  }
  cout << "The grand total is " << total << endl;*/

  // Example 8-2
  /*total = 0;
  for(counter = 0; counter < 5; ++counter) {
    cout << "Number ? ";
    cin >> current;
    total += current;
  }
  cout << "The grand total is " << total << endl;*/

  // Example 8-3
  /*int celsius;
  for(celsius = 0; celsius < 101; ++celsius);
    cout << "celsius: " << celsius << " fahrenheit: " << ((celsius * 9) / 5 + 32) << endl;*/

  // Example 8-4
  /*seven_count = 0;
  three_count = 0;

  cout << "Enter 5 Numbers: " << endl;
  cin >> my_data[1] >> my_data[2] >> my_data[3] >> my_data[4] >> my_data[5];
  for(the_index = 0; the_index <= 5; ++the_index) {
    cout << my_data[the_index] << endl;
    if(my_data[the_index] == 3) {
      cout << "Three Count: " << three_count << endl;
      ++three_count;
    }

    if(my_data[the_index] == 7) {
      cout << "Seven Count: " << seven_count << endl;
      ++seven_count;
    }
  }
  cout << "Threes: " << three_count << endl;
  cout << "Sevens: " << seven_count << endl;*/

  // Example 8-5
  result = 0;
  while(true) {
    cout << "Result: " << result << endl;
    cout << "Enter operator and number: ";

    cin >> oper_char >> value;

    if((oper_char == 'q') || (oper_char == 'Q')) {
      break;
    }

    switch(oper_char) {
      case '+':
        result += value;
        break;
      case '-':
        result -= value;
        break;
      case '*':
        result *= value;
        break;
      case '/':
        if(value == 0) {
          cout << "Error:Divide by zero" << endl;
          cout << " operation ignored" << endl;
        } else {
          result /= value;
        }
        break;
      default:
        cout << "Unknown operator " << oper_char << endl;
        break;
    }
  }

  return 0;
}

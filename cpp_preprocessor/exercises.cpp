#include <iostream>
#include <regex>
#include <string>

// Exercise 10-1
#define RETURN_STATUS RETURN_SUCCESS RETURN_WARNING RETURN_ERROR
#define RETURN_SUCCESS "Success"
#define RETURN_WARNING "Warning"
#define RETURN_ERROR "Error"
#define CHECK_RETURN_FATAL(status) (status == RETURN_ERROR)

// Exercise 10-2
#define DIVISIBLE_BY_TEN(x) ((x) % 10 == 0)

// Exercise 10-3
#define ALPHABET string("abcdefghijklmnopqrstuvwxyz")
#define IS_DIGIT(x) (typeid(x).name() == typeid(int).name())
#define IS_HEX(x) (IS_DIGIT(x) || ALPHABET.find(tolower(x)) < ALPHABET.length())

// Exercise 10-4
#define SWAP_INTS(x, y) {\
  int temp = x;\
  x = y;\
  y = temp;\
}

using namespace std;

int main() {
  // Exercise 10-1
  cout << "RETURN SUCCESS: " << (CHECK_RETURN_FATAL(RETURN_SUCCESS) ? "True" : "False") << endl;
  cout << "RETURN ERROR: " << (CHECK_RETURN_FATAL(RETURN_ERROR) ? "True" : "False") << endl;

  // Exercise 10-2
  cout << "1:" << (DIVISIBLE_BY_TEN(1) ? "True" : "False") << endl;
  cout << "100: " << (DIVISIBLE_BY_TEN(100) ? "True" : "False") << endl;

  // Exercise 10-3
  cout << "1: " << IS_HEX(1) << endl;
  cout << "A: " << IS_HEX('A') << endl;
  cout << "a: " << IS_HEX('a') << endl;
  cout << "_: " << IS_HEX('_') << endl;

  // Exercise 10-4
  int first = 16;
  int second = 12;
  cout << "First: " << first << " & Second: " << second << endl;
  SWAP_INTS(first, second);
  cout << "First: " << first << " & Second: " << second << endl;
}

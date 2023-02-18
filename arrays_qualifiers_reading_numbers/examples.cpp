#include <iostream>
#include <string>
#include <cassert>
#include <cstring>

using namespace std;

float my_data[5];
float total;
float average;

/*string first_name;
string last_name;
string full_name;*/

int value;

int height;
int width;
int area;

string line;

const int N_PRIMES = 7;
int primes[N_PRIMES] = {2, 3, 5, 7, 11, 13, 17};

int my_array[3][3] = {
  {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9}
};

char name[30];

char first[100];
char last[100];
char full_name[100];

signed char ch;

int main() {
  my_data[0] = 34.0;
  my_data[1] = 27.0;
  my_data[2] = 46.5;
  my_data[3] = 82.0;
  my_data[4] = 22.0;

  total = my_data[0] + my_data[1] + my_data[2] + my_data[3] + my_data[4];
  average = total / 5.0;

  cout << "Total " << total << " Average " << average << endl;

  /*first_name = "Steve";
  last_name = "Oualline";
  full_name = first_name + " " + last_name;
  cout << "Full name is " << full_name << endl;

  cout << "Enter a value: ";
  cin >> value;
  cout << "Twice " << value << " is " << value * 2 << endl;

  cout << "Enter width height? ";
  cin >> width >> height;
  area = (width * height) / 2;
  cout << "The area is " << area << endl;

  cout << "Enter a line: ";
  getline(cin, line);
  cout << "The length of the line is: " << line.length() << endl;

  int index = 10;
  assert(index < sizeof(primes) / sizeof(primes[0]));
  assert(index >= 0);
  cout << "The tenth prime is " << primes[index] << endl;

  cout << "Last element is " << my_array[2][2] << endl;

  strcpy(name, "Sam");
  cout << "The name is " << name << endl;

  strcpy(first, "Steve");
  strcpy(last, "Oualline");

  strcpy(full_name, first);
  strcat(full_name, " ");
  strcat(full_name, last);

  cout << "The full name is " << full_name << endl;*/

  ch = 37;
  cout << "The number is " << static_cast<int>(ch) << endl;
  return 0;
}

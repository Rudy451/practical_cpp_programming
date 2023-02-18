#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cassert>
#include <cstring>

using namespace std;

// Example 17-1
int seven_count;
int data_stuff[5];
int three_count;

void get_data(int data[]) {
  cout << "Enter 5 numbers: ";
  cin >> data[1] >> data[2] >> data[3] >> data[4] >> data[5];
}

// Example 17-2 & Example 17-3
const int MAX_NUMBERS = 1000;
const char *const DATA_FILE = "numbers.dat";

int my_data[MAX_NUMBERS];
int max_count;

float point_color(int point_number) {
  float correction;
  extern float red, green, blue;
  extern lookup(int point_number);

  correction = lookup(point_number);
  return (red*correction * 100.0 +
          blue*correction* 10.0 +
          green*correction);
}

// Example 17-7
/*const int X_SIZE = 60;
const int Y_SIZE = 30;

int matrix[X_SIZE][Y_SIZE];

void init_matrix() {
  int x, y;
  for(x = 0; x < X_SIZE; ++x) {
    for(y = 0; y < Y_SIZE; ++y) {
      assert((x >= 0) && (x < X_SIZE));
      assert((y >= 0) && (y < Y_SIZE));
      matrix[x][y] = -1;
    }
  }
}*/

// Example 17-8
/*const int X_SIZE = 60;
const int Y_SIZE = 30;

int matrix[X_SIZE][Y_SIZE];

void init_matrix() {
  register int x, y;
  for(x = 0; x < X_SIZE; ++x) {
    for(y = 0; y < Y_SIZE; ++y) {
      assert((x >= 0) && (x < X_SIZE));
      assert((y >= 0) && (y < Y_SIZE));
      matrix[x][y] = -1;
    }
  }
}*/

// Example 17-9
/*const int X_SIZE = 60;
const int Y_SIZE = 30;

int matrix[X_SIZE][Y_SIZE];

void init_matrix() {
  register int x, y;
  for(y = 0; y < Y_SIZE; ++y) {
    for(x = 0; x < X_SIZE; ++x) {
      assert((x >= 0) && (x < X_SIZE));
      assert((y >= 0) && (y < Y_SIZE));
      matrix[x][y] = -1;
    }
  }
}*/

// Example 17-11
/*const int X_SIZE = 60;
const int Y_SIZE = 32;

int matrix[X_SIZE][Y_SIZE];

void init_matrix() {
  register int x, y;
  for(x = 0; x < X_SIZE; ++x) {
    for(y = 0; y < Y_SIZE; ++y) {
      assert((x >= 0) && (x < X_SIZE));
      assert((y >= 0) && (y < Y_SIZE));
      matrix[x][y] = -1;
    }
  }
}*/

// Example 17-12
/*const int X_SIZE = 60;
const int Y_SIZE = 32;

int matrix[X_SIZE][Y_SIZE];

void init_matrix() {
  register int *matrix_ptr;
  for(matrix_ptr = &matrix[0][0]; matrix_ptr <= &matrix[X_SIZE-1][Y_SIZE-1]; ++matrix_ptr){
    *matrix_ptr = -1;
  }
}*/

// Example 17-13 & Example 17-14
const int X_SIZE = 60;
const int Y_SIZE = 32;

int matrix[X_SIZE][Y_SIZE];

inline void init_matrix() {
  memset(matrix, -1, sizeof(matrix));
}

int main() {

  // Example 17-1
  /*int index;
  void get_data(int data[]);

  seven_count = 0;
  three_count = 0;
  get_data(data_stuff);

  for(index = 1; index <= 5; ++index) {
    cout << data_stuff[index] << endl;
    if(data_stuff[index] == 3) {
      ++three_count;
    }
    if(data_stuff[index] == 7) {
      ++seven_count;
    }
  }

  cout << "Threes: " << three_count << " Seven: " << seven_count << endl;*/

  // Example 17-2 & Example 17-3
  /*ifstream in_file;
  int middle;
  int low, high;
  int search;

  in_file.open(DATA_FILE, ios::in);
  if(in_file.bad()) {
    cerr << "Error: Unable to open " << DATA_FILE << endl;
    exit(8);
  }

  max_count = 0;
  while(true) {
    char line[30];

    if(in_file.eof()) {
      break;
    }

    in_file.getline(line, sizeof(line));

    assert(max_count >= 0);
    assert(max_count < sizeof(my_data)/sizeof(my_data[0]));
    sscanf(line, "%d", &my_data[max_count]);
    if(my_data[max_count] == -1) {
      break;
    }
    ++max_count;
  }

  while(true) {
    cout << "Enter number to search or -1 to quit: ";
    cin >> search;
    if(search == -1) {
      break;
    }
    low = 0;
    high = max_count;

    while(true) {
      if(low >= high) {
        cout << "Not found" << endl;
        break;
      }

      middle = (low + high) / 2.0;

      assert(middle >= 0);
      assert(middle < sizeof(my_data)/sizeof(my_data[0]));
      if(my_data[middle] == search) {
        cout << "Found at index " << middle << endl;
        break;
      }

      assert(middle >= 0);
      assert(middle < sizeof(my_data)/sizeof(my_data[0]));
      if(my_data[middle] < search) {
        low = middle + 1;
      } else {
        high = middle - 1;
      }
    }
  }*/

  // Example 17-5 & Example 17-6
  int i,j;

  i = 1;
  j = 0;
  cout << "Starting" << endl;
  cout.flush();
  cout << "Before divide...";
  cout.flush();
  i = i / j;
  cout << "After" << endl;
  cout.flush();

  return 0;

}

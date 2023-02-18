#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

// Exercise 11-1 & Exercise 11-2
const int X_SIZE = 40;
const int Y_SIZE = 16;

char graphics[X_SIZE / 8][Y_SIZE];

inline void clear_bit(const int x, const int y) {
  assert((x >= 0) && (x < X_SIZE));
  assert((y >= 0) && (y < Y_SIZE));
  graphics[(x)/8][y] &= ~graphics[(x)/8][y];
}

inline void test_bit(const int x, const int y) {
  assert((x >= 0) && (x < X_SIZE));
  assert((y >= 0) && (y < Y_SIZE));
  int bit = static_cast<char>(0x80 >> (x%8));
  if((graphics[x/8][y] & bit) != 0) {
    cout << "Bit is set" << endl;
  } else {
    cout << "Bit is not set" << endl;
  }

}

inline void set_bit(const int x, const int y) {
  assert((x >= 0) && (x < X_SIZE));
  assert((y >= 0) && (y < Y_SIZE));
  graphics[(x)/8][y] |= static_cast<char>(0x80 >> ((x)%8));
}

void print_graphics() {
  int x;
  int y;
  int bit;

  for(x = 0; x < X_SIZE / 8; ++x) {
    for(y = 0; y < Y_SIZE; ++y) {
      for(bit = 0x80; bit > 0; bit = (bit >> 1)) {
        assert((x >= 0) && (x < (X_SIZE/8)));
        assert((y >= 0) && (y < Y_SIZE));

        if((graphics[x][y] & bit) != 0) {
          cout << 'X';
        } else {
          cout << '.';
        }
      }
      cout << endl;
    }
  }
  cout << endl;
}

// Exercise 11-3
int i1, i2;

// Exercise 11-4
int bit_counter(int num) {
  int total = 0;
  int bit = 0x01;
  for(int i = 0; i < 16; ++i) {
    if(num & (bit << i)) {
      total += 1;
    }
  }
  return total;
}

// Exercise 11-5
void split_int(long int num) {
  cout << num << endl;
  int bit = 0x01;
  int new_num = 0;
  for(int i = 31; i > -1; --i) {
    if(num & (bit << i)){
      if(i == 31 && num < 0) {
        continue;
      } else {
        new_num |= (bit << (i % 4));
      }
    }

    if(i % 4 == 0) {
      cout << new_num << endl;
      new_num = 0;
    }
  }
}

// Exercise 11-6
int bit_shift_left(int num) {
  int bit = 0x80;
  int switch_bit = 1;
  for(int i = 0; i < 8; ++i) {
    if(num & (bit >> i)) {
      num |= (bit >> switch_bit);
      switch_bit += 1;
      if(i > 0) {
        num &= ~(bit >> i);
      }
    }
  }
  return num;
}

int main() {
  // Exercise 11-1
  /*int loc;
  print_graphics();
  for(loc = 0; loc < X_SIZE; ++loc) {
    set_bit(loc, loc);
  }
  print_graphics();
  for(loc = 0; loc < X_SIZE; ++loc) {
    test_bit(loc, loc);
  }
  for(loc = 0; loc < X_SIZE; ++loc) {
    clear_bit(loc, loc);
  }
  print_graphics();*/

  // Exercise 11-2
  /*int loc_x;
  int loc_y;
  print_graphics();
  for(loc_x = 3; loc_x < 8; ++loc_x) {
    for(loc_y = 3; loc_y < 13; ++loc_y){
      if(loc_x == 3 || (loc_y == 3 || loc_y ==12)){
        set_bit(loc_x, loc_y);
      }
    }
  }
  print_graphics();
  for(loc_x = 3; loc_x < 8; ++loc_x) {
    for(loc_y = 3; loc_y < 13; ++loc_y){
      if(loc_x == 3 || (loc_y == 3 || loc_y ==12)){
        clear_bit(loc_x, loc_y);
      }
    }
  }
  print_graphics();
  for(loc_x = 0; loc_x < 5; ++loc_x) {
    for(loc_y = 3; loc_y < 13; ++loc_y){
      if(loc_x == 4 || (loc_y == 3 || loc_y ==12)){
        set_bit(loc_x, loc_y);
      }
    }
  }
  print_graphics();
  for(loc_x = 0; loc_x < 5; ++loc_x) {
    for(loc_y = 3; loc_y < 13; ++loc_y){
      if(loc_x == 4 || (loc_y == 3 || loc_y ==12)){
        clear_bit(loc_x, loc_y);
      }
    }
  }*/

  // Exercise 11-3
  /*int loc;
  print_graphics();
  for(loc = 0; loc < 8; ++loc){
    set_bit(loc, 8);
  }
  print_graphics();*/


  // Exercise 11-4
  /*cout << bit_counter(1) << endl;
  cout << bit_counter(2) << endl;
  cout << bit_counter(3) << endl;
  cout << bit_counter(4) << endl;
  cout << bit_counter(5) << endl;
  cout << bit_counter(12) << endl;*/

  // Exercise 11-5
  //split_int(2000000000);

  // Exercise 11-6
  int num = 1;
  cout << bit_shift_left(num) << endl;
  num = 3;
  cout << bit_shift_left(num) << endl;
}

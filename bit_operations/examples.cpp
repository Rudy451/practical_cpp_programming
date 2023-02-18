#include <iostream>
#include <cassert>

using namespace std;

// Example 11-1
int i1, i2;

// Example 11-2
const int X_SIZE = 40;
const int Y_SIZE = 60;

char graphics[X_SIZE / 8][Y_SIZE];

inline void set_bit(const int x, const int y) {
  assert((x >= 0) && (x < X_SIZE));
  assert((y >= 0) && (y < Y_SIZE));
  graphics[(x)/8][y] |= static_cast<char>(0x80 >> ((x)%8));
}

void print_graphics() {
  int x;
  int y;
  int bit;

  for(y = 0; y < Y_SIZE; ++y) {
    for(x = 0; x < X_SIZE / 8; ++x) {
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
}

int main() {

  // Example 11-1
  i1 = 4;
  i2 = 2;

  /*if((i1 != 0) && (i2 != 0)) {
    cout << "Both are not zero #1" << endl;
  }

  if(i1 && i2) {
    cout << "Both are not zero #2" << endl;
  }

  if(i1 & i2) {
    cout << "Both are not zero #3" << endl;
  }*/

  // Example 11-2
  int loc;
  //print_graphics();
  for(loc = 0; loc < X_SIZE; ++loc) {
    set_bit(loc, loc);
  }

  //print_graphics();
  short int i;

  for(i = 0x80; i > 0; i = (i >> 1)) {
    cout << "i is " << hex << i << dec << endl;
  }

  signed char ch;

  for(ch = 0x80; ch != 0; ch = (ch >> 1)) {
    cout << "ch is " << hex << static_cast<int>(ch) << dec << endl;
  }

  return(0);

}

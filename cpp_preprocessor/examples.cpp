#include <iostream>
#include <cstdlib>

// Example 10-1
#define BIG_NUMBER 100

// Example 10-2 & Example 10-3
#define FIRST_PART 7
#define LAST_PART 5
#define ALL_PARTS FIRST_PART + LAST_PART

// Example 10-4
#define MAX -10

// Example 10-5
#define SIZE 10
#define FUDGE SIZE-2

// Example 10-6
#define DIE \
  {cerr << "Fatal Error:Abort" << endl; exit(8);}

// Example 10-7
// #define SQR(x) (x * x)

// Example 10-8
#define SQR(x) ((x) * (x))

// Example 10-9
#define RECIPROCAL(number) (1.0 / (number))

using namespace std;

int main() {

  // Example 10-1
  // index for our calculations
  int index;

  index = 1;

  while(index < BIG_NUMBER) {
    index *= 8;
  }

  // Example 10-2 & Example 10-3
  cout << "The square of all the parts is " << (ALL_PARTS * ALL_PARTS) << endl;

  // Example 10-4
  int counter;
  for(counter = MAX; counter > 0; --counter) {
    cout << "Hi There...." << endl;
  }

  // Example 10-5
  int size;

  size = FUDGE;
  cout << "Size is " << size << endl;

  // Example 10-6
  int value;

  value = 1;
  if(value < 0) {
    DIE;
  }

  cerr << "We did not die..." << endl;

  // Example 10-7
  /*for(counter = 0; counter < 5; ++counter) {
    cout << "x " << (counter + 1) << " x squared " << SQR(counter + 1) << endl;
  }*/

  // Example 10-8
  /*for(counter = 0.0; counter < 10.0; counter += 1.0) {
    cout << "x " << (counter + 1) << " x squared " << SQR(++counter) << endl;
  }*/

  // Example 10-9
  for(counter = 0.0; counter < 10.0; counter += 1.0) {
    cout << "1/" << counter << " = " << RECIPROCAL(counter) << endl;
  }

  return 0;
}

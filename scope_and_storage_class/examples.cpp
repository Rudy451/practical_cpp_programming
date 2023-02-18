#include <iostream>
#include <cassert>
#include <iomanip>

using namespace std;

float triangle(const float width, const float height) {
  float area;

  assert(width >= 0.0);
  assert(height >= 0.0);
  area = width * height / 2.0;
  return area;
}

void my_counter(int &count) {
  ++count;
}

const int& biggest(int array[], int n_elements) {
  int index;
  int biggest;

  biggest = 0;
  for(index = 1; index < n_elements; ++index) {
    if(array[biggest] < array[index]) {
      biggest = index;
    }
  }

  return array[biggest];
}

const int& min(const int& i1, const int& i2) {
  return i1 < i2 ? i1 : i2;
}

int main() {

  // Example 9-1, Example 9-2, Example 9-3
  int counter;
  for(counter = 0; counter < 3; ++counter) {
    int temporary = 1;
    static int permanent = 1;
    cout << "Temporary: " << temporary++ << endl;
    cout << "Permanent: " << permanent++ << endl;
  }

  cout << "Triangle: " << fixed << setprecision(2) << triangle(1.3, 8.3) << endl;

  // Example 9-4
  int count = 0;
  cout << "Old Count: " << count << endl;
  my_counter(count);
  cout << "New Count: " << count << endl;

  // Example 9-7
  int item_array[5] = {1, 2, 5000, 3, 4};

  cout << "The biggest element is: " << biggest(item_array, 5) << endl;

  // Example 9-8
  const int& i = min(1+2, 3+4);

  return 0;
}

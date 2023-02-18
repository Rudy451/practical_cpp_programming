#include <iostream>

using namespace std;

int old_number;
int current_number;
int next_number;

int total;
int item;
int minus_items;

int main() {
  old_number = 1;
  current_number = 1;

  cout << 1 << endl;

  while(current_number < 100) {
    cout << current_number << endl;
    next_number = current_number + old_number;
    old_number = current_number;
    current_number = next_number;
  }

  total = 0;
  while(true) {
    cout << "Enter # to add " << endl;
    cout << " or 0 to stop: ";
    cin >> item;
    if(item == 0) break;

    total += item;
    cout << "Total: " << total << endl;
  }

  cout << "Final total " << total << endl;

  total = 0;
  minus_items = 0;
  while(true) {
    cout << "Enter # to add" << endl;
    cout << " or 0 to stop: ";
    cin >> item;

    if(item == 0) break;

    if(item < 0) {
      ++minus_items;
      continue;
    }

    total += item;
    cout << "Total: " << total << endl;
  }
  cout << "Final total " << total << endl;
  cout << "with " << minus_items << " negative items omitted" << endl;

  return 0;
}

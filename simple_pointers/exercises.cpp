#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

// Exercise 11-1
vector<int> my_array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *array_ptr = &my_array[0];

// Exercise 11-2
char *get_string_ptr(char single_string[]) {
  for(int i = 0; i < strlen(single_string); ++i){
    if(single_string[i] != ' '){
      return &single_string[i];
    }
  }
  return &single_string[strlen(single_string)-1];
}

int main() {
  // Exercise 11-1
  for(int i = 0; i < my_array.size(); ++i) {
    cout << "# " << (i + 1);
    cout << ": Pre-Change (" << *(array_ptr + i) << ")";
    *(array_ptr + i) = 0;
    cout << " v. Post-Change (" << *(array_ptr + i) << ")." << endl;
  }

  // Exercise 11-2
  char single_string[50];
  cout << "Enter a string for evaluation: ";
  cin >> single_string;
  cout << *(get_string_ptr(single_string)) << endl;

  return 0;
}

#include <iostream>

using namespace std;

struct info {
  int valid:1;
  int data:31;
};

info a_info;

int main() {
  a_info.valid = 1;
  if(a_info.valid == 1) {
    cout << "a_info is valid" << endl;
  }
  return 0;
}

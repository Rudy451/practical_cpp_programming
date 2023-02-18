#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

/* WORD COUNT */
// Word is defined as a string of at least length one.
// Recursively call function for each string in sentence.
// Find delimiter via find_first_of() function
int word_count(string sentence){
  int spot = sentence.find_first_of(" ");
  return spot == -1 ? 1 : 1 + word_count(sentence.substr(spot + 1, sentence.length() - spot));
}

bool begins(string string1, string string2) {
  return string2.substr(0, string1.length()) == string1;
}

int count(int number, vector<int> arr, int length) {
  return length == 0 ? 0 : (arr[length - 1] == number ? 1 : 0) + count(number, arr, length - 1);
}

int count_chars(const char* word) {
  int total = 0;
  for(int i = 0; i < strlen(word); ++i) {
    total += word[i];
  }
  return total;
}

int max_num(vector<int> nums_list) {
  int max = -1;
  for(int i = 0; i < nums_list.size(); ++i) {
    if(max < nums_list[i]){
      max = nums_list[i];
    }
  }
  return max;
}

void scan(string &sentence) {
  for(int i = 0; i < sentence.length(); ++i) {
    if(sentence[i] == '-') {
      sentence[i] = '_';
    }
  }
}

int main() {
  // Exercise 9-1
  cout << "Word Count: " << word_count("Once upon a time") << endl;

  // Exercise 9-2
  cout << "Begins: " << (begins("fantastic", "abundance") ? "true" : "false")<< endl;
  cout << "Begins: " << (begins("nine", "ninety") ? "true" : "false") << endl;

  // Exercise 9-3
  vector<int> arr = {1, 2, 5, 4, 5};
  cout << "Count of five: " << count(5, arr, arr.size()) << endl;

  // Exercise 9-4
  cout << "Number of chars in 'happy': " << count_chars("happy") << endl;

  // Exercise 9-5
  cout << "Max: " << max_num({200, 105, 3, 78, 444, 2}) << endl;

  // Exercise 9-6
  string sentence = "rock-paper-scissors";
  scan(sentence);
  cout << "New file name: " << sentence << endl;
}

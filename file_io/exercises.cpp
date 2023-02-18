#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <string>

using namespace std;

// Exercise 16-4
/*string num_to_binary(int num) {
  auto spot = 1;
    if(num > 1){
      while(pow(2, spot) <= num) {
        ++spot;
      }
    }
    spot -= 1;
    string result = "";
    int temp_num = num;
    while(spot > -1) {
      string temp = num == 1 || (temp_num - pow(2, spot)) >= 0 ? "1" : "0";
      result = result.append(temp);
      //cout << temp_num << ", " << pow(2, spot) << endl;
      if(temp == "1" && temp_num > 0) {
        temp_num -= pow(2, spot);
      }
      --spot;
    }

    return result;
}

int binary_to_num(string binary_num) {
  int num = 0;
  for(int i = 0; i < binary_num.length(); ++i) {
    if(binary_num[binary_num.length() - 1 - i] == '1') {
      num += pow(2, i);
    }
  }
  return num;
}*/

int main(int argc, char * argv[]) {

  //FILE *in_file;
  //FILE *out_file;
  //FILE *out_file2;
  //int ch;

  // Exercise 16-1
  /*int count = 0;

  in_file = fopen(argv[1], "r");
  while(true) {
    ch = fgetc(in_file);
    if(ch == '\n') {
      ++count;
    }
    if(ch == EOF) {
      break;
    }
  }

  cout << count << endl;
  fclose(in_file);*/

  // Exercise 16-2
  /*in_file = fopen(argv[1], "r");
  out_file = fopen(argv[2], "w");

  while(true) {
    ch = fgetc(in_file);
    //cout << static_cast<char>(ch) << endl;
    if(ch == EOF) {
      break;
    }
    if(ch == '\t') {
      for(int i = 0; i < 8; ++i) {
        fputc(' ', out_file);
      }
    } else {
      fputc(ch, out_file);
    }
  }

  fclose(in_file);
  fclose(out_file);*/

  // Exercise 16-3
  /*in_file = fopen(argv[1], "r");
  out_file = fopen(argv[2], "w");
  out_file2 = fopen(argv[3], "w");

  while(true) {
    ch = fgetc(in_file);
    if(ch == EOF) {
      break;
    }
    fputc(ch, ch % 3 == 0 ? out_file : out_file2);
    fputc('\n', ch % 3 == 0 ? out_file : out_file2);
  }*/

  // Exercise 16-4
  /*ifstream in_file;
  in_file.open(argv[1]);
  ofstream out_file;
  out_file.open(argv[2]);
  string in_stuff;

  while(getline(in_file, in_stuff)) {
    if(argv[0] == "ex4_in.txt") {
      out_file << num_to_binary(stoi(in_stuff));
      out_file << "\n";
    } else {
      out_file << binary_to_num(in_stuff);
      out_file << "\n";
    }
  }

  in_file.close();
  out_file.close();*/

  // Exercise 16-5
  /*FILE *in_file = fopen(argv[1], "r");
  FILE *out_file = fopen(argv[2], "wb");
  char ch;

  while(true) {
    ch = fgetc(in_file);
    if(ch == EOF) {
      break;
    }
    if((ch & 0x10) == 0) {
      fputc(ch, out_file);
    }
  }

  fclose(in_file);
  fclose(out_file);*/

  // Exercise 16-6
  FILE *in_file = fopen(argv[1], "r");
  FILE *out_file = fopen(argv[2], "wb");
  char in_str[30];
  char name[7] = "Name: ";
  char address[10] = "Address: ";
  char party[8] = "Party: ";
  int i = 0;

  while(true) {
    if(fgets(in_str, 40, in_file) != NULL) {
      cout << in_str << endl;
      fputs(strcat(i == 0 ? name : i == 1 ? address : party, in_str), out_file);
    }
    ++i;
    if(i == 4) {
      break;
    }
  }

  fclose(in_file);
  fclose(out_file);

  return 0;
}

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <iomanip>
#include <cstdlib>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// Example 16-5
#ifdef __WIN32__
#include <io.h>
#else
#include <unistd.h>
#endif

using namespace std;

const int BUFFER_SIZE = (16 * 1024);

// Example 16-6
const char FILE_NAME[] = "input.txt";

int main(int argc, char *argv[]) {

  /*// Example 16-1
  const int DATA_SIZE = 100;
  int data_array[DATA_SIZE];
  ifstream data_file("numbers.dat");
  int i;

  if(data_file.bad()) {
    cerr << "Error: Could no open numbers.dat" << endl;
    exit(8);
  }

  for(int i = 0; i < DATA_SIZE; ++i) {
    assert(i >= 0);
    assert(i < sizeof(data_array) / sizeof(data_array[0]));
    data_file >> data_array[i];
  }

  int total;

  total = 0;
  for(int i = 0; i < DATA_SIZE; ++i) {
    assert(i >= 0);
    assert(i < sizeof(data_array) / sizeof(data_array[0]));
    total += data_array[i];
  }

  cout << "Total of all the numbers is " << total << endl;

  // Example 16-2
  ofstream outfile("data.log", ios::out|ios::app|ios::ate);
  if(outfile.fail()) {
    return -1;
  }
  outfile << "Done...." << endl;

  // Example 16-3
  int number = 12;
  float real = 12.34;

  cout << "123456789012345678901234567890" << endl;
  cout << number << "<-" << endl;
  cout << setw(5) << number << "<-" << endl;
  cout << setw(5) << setfill('*') << number << "<-" << endl;
  cout << setiosflags(ios::showpos|ios::left) << setw(5) << number << "<-" << endl;

  cout << real << "<-" << endl;
  cout << setprecision(1) << setiosflags(ios::fixed) << real << "<-" << endl;

  cout << setiosflags(ios::scientific) << real << "<-" << endl;

  // Example 16-5
  char buffer[BUFFER_SIZE];
  int in_file;
  int out_file;
  int read_size;

  if(argc != 3) {
    cerr << "Error: Wrong number of arguments" << endl;
    cerr << "Usage is: copy <from> <to>" << endl;
  }
  in_file = open(argv[1], O_RDONLY);
  if(in_file < 0) {
    cerr << "Error:Unable to open " << argv[2] << endl;
    exit(8);
  }
  out_file = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0666);
  if(out_file < 0) {
    cerr <<"Error:Unable to open" << argv[2] << endl;
    exit(8);
  }
  while(true) {
    read_size = read(in_file, buffer, sizeof(buffer));
    if(read_size == 0) {
      break;
    }
    if(read_size < 0) {
      cerr << "Error:Read error" << endl;
      exit(8);
    }
    write(out_file, buffer, (unsigned int) read_size);
  }
  close(in_file);
  close(out_file);
  // Example 16-6
  int count = 0;
  FILE *in_file;

  int ch;

  in_file = fopen(FILE_NAME, "rb");
  if(in_file == NULL) {
    cerr << "Can not open " << FILE_NAME << endl;
    exit(8);
  }

  while(true) {
    ch = fgetc(in_file);
    if(ch == EOF) {
      break;
    }
    ++count;
  }

  cout << "Number of characters in " << FILE_NAME << " is " << count << endl;
  fclose(in_file);*/

  // Example 16-9
  char name[100];
  FILE *in_file;

  printf("Name? ");
  fgets(name, sizeof(name), stdin);

  in_file = fopen(name, "r");
  if(in_file == NULL) {
    fprintf(stderr, "Could not open file\n");
    exit(8);
  }
  printf("File found\n");
  fclose(in_file);

  return 0;
}

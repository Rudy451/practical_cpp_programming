#include <iostream>
#include <cassert>
#include <iomanip>
#include <cstdlib>
#include <cstring>

using namespace std;

// Example 15-2
const int ARRAY_SIZE = 10;
char my_array[ARRAY_SIZE] = "12345678";

// Example 15-3
int my_array2[10] = {4, 5, 8, 9, 8, 1, 0, 1, 9, 3};
int the_index;

// Example 15-4
int my_array3[10] = {4, 5, 8, 9, 8, 1, 0, 1, 9, 3};
int *array_ptr;

// Example 15-5
const int MAX = 10;

void init_array_1(int data[]) {
  int index;

  for(index = 0; index < MAX; ++index) {
    assert(index >= 0);
    assert(index < MAX);
    data[index] = 0;
  }
}


void init_array_2(int *data_ptr) {
  int index;

  for(index = 0; index < MAX; ++index) {
    *(data_ptr + index) = 0;
  }
}

char *strchr(char * string_ptr, char find) {
  while(*string_ptr != find) {
    if(*string_ptr == '\0') {
      return NULL;
    }
    ++string_ptr;
  }
  return string_ptr;
}

// Example 15-7
char *tmp_name() {
  static char name[30];
  static int sequence = 0;

  ++sequence;
  strcpy(name, "tmp");

  name[3] = static_cast<char>(sequence + '0');
  name[4] = '\0';

  return name;
}

// Example 15-8
int verbose = 0;
const char *out_file = "print.out";
char *program_name;
int line_max = 66;

void do_file(const char *const name) {
  cout << "Verbose " << verbose << " Lines " << line_max << " Input " << name << " Output " << out_file << endl;
}

void usage() {
  cerr << "Usage is " << program_name << " [options] [file-list]\n";
  cerr << "Options" << endl;
  cerr << "   -v           verbose" << endl;
  cerr << "   -l<number>   Number of lines" << endl;
  cerr << "   -o<name>     Set output file name" << endl;
  exit(8);
}

int main(int argc, char *argv[]) {
  // Example 15-1
  int thing_var;
  int *thing_ptr;

  thing_var = 2;
  cout << "Thing " << thing_var << endl;

  thing_ptr = &thing_var;
  *thing_ptr = 3;

  cout << "Thing " << thing_var << endl;
  cout << "Thing " << *thing_ptr << endl;

  // Example 15-2
  int index;

  for(index = 0; index < ARRAY_SIZE; ++index) {
    cout << hex;
    assert(index >= 0);
    assert(index < sizeof(my_array)/sizeof(my_array[0]));
    cout << "&my_array[index]=0x" << *reinterpret_cast<int*>(&my_array[index]) << " (my_array+index)=0x" << *reinterpret_cast<int*>(my_array + index) << " my_array[index]=0x" << static_cast<int>(my_array[index]) << endl;
    cout << dec;
  }

  // Example 15-3
  the_index = 0;
  while(true) {
    assert(the_index >= 0);
    assert(the_index < sizeof(my_array2)/sizeof(my_array2[0]));

    if(my_array2[the_index] == 0) {
      break;
    }

    ++the_index;
  }

  cout << "Number of elements before zero: " << the_index << endl;

  // Example 15-4
  array_ptr = my_array3;

  while((*array_ptr) != 0) {
    ++array_ptr;
  }

  cout << "Number of elements before zero: " << (array_ptr - my_array3) << endl;

  // Example 15-5
  int my_array4[MAX];

  init_array_1(my_array4);
  init_array_1(&my_array4[0]);
  init_array_2(my_array4);

  // Example 15-6
  /*char line[80];
  char *first_ptr;
  char *last_ptr;

  cin.getline(line, sizeof(line));

  last_ptr = line;
  first_ptr = strchr(line, '/');

  if(first_ptr == NULL) {
    cerr << "Error: Unable to find slash in " << line << endl;
    exit(8);
  }

  *first_ptr = '\0';
  ++first_ptr;

  cout << "First: " << first_ptr << " Last: " << last_ptr << endl;*/

  // Example 15-7
  cout << "Name: " << tmp_name() << endl;

  // Example 15-8
  program_name = argv[0];

  while((argc > 1) && (argv[1][0] == '-')) {
    switch(argv[1][1]) {
      case 'v':
        verbose = 1;
        break;
      case 'o':
        out_file = &argv[1][2];
        break;
      case 'l':
        line_max = atoi(&argv[1][2]);
        break;
      default:
        cerr << "Bad option " << argv[1] << endl;
        usage();
    }
    ++argv;
    --argc;
  }

  if(argc == 1) {
    do_file("print.in");
  } else {
    while(argc > 1) {
      do_file(argv[1]);
      ++argv;
      --argc;
    }
  }

  return 0;
}

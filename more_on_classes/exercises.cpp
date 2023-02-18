#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Exercise 11-1
static bool used = false;

bool checked_out(){
  return used;
}

class program_one {
public:
  template<class T> friend void file_checkout(T &t);
  template<class T> friend void file_return(T &t);
private:
  bool mine = false;
};

class program_two {
public:
  template <class T> friend void file_checkout(T &t);
  template <class T> friend void file_return(T &t);
private:
  bool mine = false;
};

template <class T> void file_checkout(T &t) {
  if(~checked_out()){
    used = true;
    t.mine = true;
  }
}

template <class T> void file_return(T &t) {
  if(checked_out() && t.mine){
    used = false;
    t.mine = false;
  }
}

// Exercise 11-2
class Pigs {
  public:
    Pigs(string name){
      this->animal_name = name;
      ++total;
    }
    friend int total_animals();
  private:
    string animal_name;
    string food = "gruel";
    string job = "sleep";
    static int total;
};

class Horses {
  public:
    Horses(string name){
      this->animal_name = name;
      ++total;
    }
    friend int total_animals();
  private:
    string animal_name;
    string food = "oats";
    string job = "work";
    static int total;
};

class Dogs {
  public:
    Dogs(string name) {
      this->animal_name = name;
      total += 1;
    }
    friend int total_animals();
  private:
    string animal_name;
    string food = "steak";
    string job = "lead";
    static int total;
};

int Pigs::total = 0;
int Horses::total = 0;
int Dogs::total = 0;

int total_animals() {
  return Pigs::total + Horses::total + Dogs::total;
}

// Exercise 11-3
class stack {
  public:
    void add(int value) {
      this->body.insert(this->body.begin(), value);
    }

    void remove() {
      this->body.erase(this->body.begin());
    }
  private:
    vector<int> body;
};

static stack master_stack;
static string master_user;

class stack_user {
  public:
    stack_user(string name) {
      this->user_name = name;
    }
    void lock() {
      if(!locked) {
        locked = true;
        master_user = this->user_name;
      } else {
        cout << "Already used" << endl;
      }
    }
    void unlock() {
      if(locked && master_user == this->user_name) {
        cout << "Same guy" << endl;
        master_user = "None";
        locked = false;
      } else {
        cout << "Not in use" << endl;
      }
    }
    friend bool locked_status();
  private:
    string user_name;
    bool static locked;
};

bool stack_user::locked = false;

bool locked_status() {
  return stack_user::locked;
}

// Exercise 11-4
class line_number {
  public:
    line_number(int line_num) {
      this->current_line = line_num;
      total_instances.push_back(this);
    }

    static string goto_line(int line) {
      int target_line;
      for(int i = 0; i < total_instances.size(); ++i) {
        if(total_instances[i]->current_line < line) {
          target_line = line;
        }
      }
      return line_number::pages[target_line + line - target_line];
    }

    int get_current_line() {
      return this->current_line;
    }

    long int get_char_pos() {
      return pages[current_line].find("\n\n\n");
    }

    friend void show_total_instances();

  private:
    static vector<line_number*> total_instances;
    static vector <string> pages;
    int current_line = 0;
};

vector<line_number*> line_number::total_instances = {};
vector<string> line_number::pages = {"It", "Was", "The", "Best"};

void show_total_instances(){
  cout << "Total Instances: " << line_number::total_instances.size() << endl;
}

int main() {

  // Exercise 11-1
  program_one one;
  program_two two;
  cout << "Use Status: " << checked_out() << endl;
  file_checkout(one);
  cout << "Use Status: " << checked_out() << endl;
  file_return(one);
  cout << "Use Status: " << checked_out() << endl;
  file_checkout(two);
  cout << "Use Status: " << checked_out() << endl;
  file_return(two);
  cout << "Use Status: " << checked_out() << endl;

  // Exercise 11-2
  Pigs my_pig("Abner");
  Pigs my_pig2("Wilbur");
  Horses my_horse("Boxer");
  Horses my_horse2("Secretariat");
  Dogs my_dog("Lassie");
  Dogs my_dog2("Rover");

  cout << "Total Animals Defined: " << total_animals() << endl;

  // Exercise 11-3
  stack_user guy1("Roy");
  stack_user guy2("Joe");
  guy1.lock();
  guy2.lock();
  cout << "Lock Status: " << locked_status() << endl;
  guy2.unlock();
  guy1.unlock();
  cout << "Lock Status: " << locked_status() << endl;

  // Exercise 11-4
  line_number beginning(0);
  show_total_instances();
  line_number chapter_start(2);
  show_total_instances();
  line_number chapter_heading(112);
  show_total_instances();
  line_number current_location(52);
  show_total_instances();
  cout << "Word at line #2 is: " << line_number::goto_line(1) << endl;
  return 0;
}

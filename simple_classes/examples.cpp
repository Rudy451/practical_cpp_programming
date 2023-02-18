#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;

const int STACK_SIZE = 100;

// Example 12-1
/*struct stack {
  int count;
  int data[STACK_SIZE];
};

inline void stack_init(struct  stack& the_stack) {
  the_stack.count = 0;
}

inline void stack_push(struct stack& the_stack, const int item) {
  assert((the_stack.count >= 0) && the_stack.count < sizeof(the_stack.data) / sizeof(the_stack.data[0]));
  the_stack.data[the_stack.count] = item;
  ++the_stack.count;
}

inline int stack_pop(struct stack &the_stack) {
  --the_stack.count;

  assert((the_stack.count >= 0) && (the_stack.count < sizeof(the_stack.data)/sizeof(the_stack.data[0])));
  return (the_stack.data[the_stack.count]);
}*/

class stack {
  private:
    int count;
    int data[STACK_SIZE];
  public:
    void init();

    void push(const int item);

    int pop();
};

inline void stack::init() {
  count = 0;
}

inline void stack::push(const int item) {
  assert((count >= 0) && (count < sizeof(data)/sizeof(data[0])));
  data[count] = item;
  ++count;
}

inline int stack::pop() {
  --count;
  assert((count >= 0) && (count < sizeof(data)/sizeof(data[0])));
  return (data[count]);
}

int main() {

  // Example 12-1
  /*struct stack a_stack;
  stack_init(a_stack);

  stack_push(a_stack, 1);
  stack_push(a_stack, 2);
  stack_push(a_stack, 3);

  cout << "Expect a 3 ->" << stack_pop(a_stack) << endl;
  cout << "Expect a 2 ->" << stack_pop(a_stack) << endl;
  cout << "Expect a 1 ->" << stack_pop(a_stack) << endl;*/

  // Exercise 12-2
  stack a_stack;

  a_stack.init();

  a_stack.push(1);
  a_stack.push(2);
  a_stack.push(3);

  cout << "Expect a 3 ->" << a_stack.pop() << endl;
  cout << "Expect a 2 ->" << a_stack.pop() << endl;
  cout << "Expect a 1 ->" << a_stack.pop() << endl;

  return(0);
}

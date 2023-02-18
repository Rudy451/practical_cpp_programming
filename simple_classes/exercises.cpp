#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

// Exercise 11-1
class parity {
  public:
    void put();
    bool test();
  private:
    int calls = 0;
};

void parity::put() {
  ++this->calls;
}

bool parity::test() {
  return this->calls % 2 == 0;
}

// Exercise 11-2
class check {
  public:
    check(int amount = 0) {
      this->total_amount = amount;
    }

    void add_item(int amount);

    int total();

  private:
    int total_amount;
};

void check::add_item(int amount) {
  this->total_amount += amount;
}

int check::total() {
  return this->total_amount;
}

// Exercise 11-3
class queue {
  public:
    void put(int item);

    int get();

  private:
    int queue_size = 0;
    vector<int> body;
};

void queue::put(int item) {
  this->body.push_back(item);
}

int queue::get() {
  int result = this->body.at(0);
  this->body.erase(this->body.begin());
  return result;
}

// Exercise 11-4
class small_set {
  public:
    void set(int item);

    void clear(int item);

    int test(int item);
  private:
    vector<int> body;
    int set_size = 0;
};

void small_set::set(int item) {
  this->body.push_back(item);
  this->set_size += 1;
}

void small_set::clear(int item) {
  for(int i = 0; i < this->set_size; ++i) {
    if(this->body[i] == item) {
      this->body.erase(this->body.begin() + i);
      this->set_size -= 1;
    }
  }
}

int small_set::test(int item) {
  bool result = false;
  for(int i = 0; i < this->set_size; ++i){
    if(this->body[i] == item) {
      result = true;
      break;
    }
  }
  return result;
}

// Exercise 11-5
struct single_card {
  string question;
  string answer;
};

class flash_card {
  public:
    flash_card(list<single_card> entry);

    const single_card& get_card();

    void right();

    void wrong(single_card card);

    bool done();
  private:
   list<single_card> deck;
};

flash_card::flash_card(list<single_card>entry) {
  this->deck = entry;
}

const single_card& flash_card::get_card() {
  const single_card& card = this->deck.front();
  this->deck.erase(this->deck.begin());
  return card;
}

void flash_card::right() {
  cout << "That's correct.... Card discarded" << endl;
}

void flash_card::wrong(single_card card) {
  cout << "That's wrong... Better luck next time" << endl;
  this->deck.push_back(card);
}

bool flash_card::done() {
  return this->deck.size() == 0;
}

int main() {

  // Exercise 11-1
  /*parity examples;
  for(int i = 0; i < 20; ++i){
    cout << (examples.test() == 1 ? "True" : "False") << endl;
    examples.put();
  }*/

  // Exercise 11-2
  /*check my_check_book(2);
  for(int i = 0; i < 20; ++i) {
    cout << "Amount: " << i << endl;
    my_check_book.add_item(i);
    cout << "Total: " << my_check_book.total() << endl;
  }*/

  // Exercise 11-3
  /*queue a_queue;

  a_queue.put(1);
  a_queue.put(2);
  a_queue.put(3);

  cout << a_queue.get() << endl;
  cout << a_queue.get() << endl;*/

  // Exercise 11-4
  /*small_set a_set;
  a_set.set(3);
  a_set.set(5);
  a_set.set(5);

  cout << a_set.test(3) << endl;
  cout << a_set.test(0) << endl;*/

  // Exercise 11-5
  /*list<single_card> cards;
  single_card first;
  first.question = "What Color Are The Roses???";
  first.answer = "Red";
  cards.push_back(first);
  single_card second;
  second.question = "What type of card in Alice in Wonderland??";
  second.answer = "Cheshire";
  cards.push_back(second);
  flash_card card_game(cards);
  string response;
  while(~card_game.done()) {
    single_card my_card = card_game.get_card();
    cout << my_card.question << ": ";
    cin >> response;
    if(response == my_card.answer) {
      card_game.right();
    } else {
      card_game.wrong(my_card);
    }
  }*/
}

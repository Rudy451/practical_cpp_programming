#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

// Exercise 11-1
struct mailing_list {
  char name[60];
  char address[60];
  char address2[60];
  char city[40];
  char state[3];
  long int zip;
} my_list;

struct time_stamp {
  long int hour;
  long int minute;
  char am_pm[3];
  long int month;
  long int day;
  long int year;
};

long int time_difference(time_stamp one, time_stamp two) {
  long int total = 0;
  total += (((one.hour % 12 + 1) + (strcmp(one.am_pm, "AM") > 0 ? 12 : 0)) * 60) - (((two.hour % 12 + 1) + (strcmp(two.am_pm, "AM") ? 12 : 0)) * 60);
  total += one.minute - two.minute;
  total += ((one.month % 12 + 1) - (two.month % 12 + 1)) * 30 * 24 * 60;
  total += ((one.day % 31 + 1) - (two.day % 31 + 1)) * 24 * 60;
  total += ((one.year % 2023 + 1) - (two.year % 2023 + 1)) * 360 * 24 * 60;
  return total;
}
// Exercise 11-3
struct airline_reservation {
  long int flight_number;
  char original_airport_code[4];
  char destination_airport_code[4];
  time_stamp departure_time;
  time_stamp arrival_time;
};

void flights_list(airline_reservation airport_one[2], airline_reservation airport_two[2]) {
  for(int i = 0; i < 2; ++i) {
    if(airport_one[i].flight_number > 10000) {
      cout << "Flight_Number: " << airport_one[i].flight_number << endl;
      cout << "From: " << airport_one[i].original_airport_code;
      cout << " To: " << airport_one[i].destination_airport_code << endl;
      cout << "Departure Time: " << airport_one[i].departure_time.hour <<
      ":" << airport_one[i].departure_time.minute << airport_one[i].departure_time.am_pm <<
      " (" << airport_one[i].departure_time.month << "/" << airport_one[i].departure_time.day <<
      "/" << airport_one[i].departure_time.year << ")" << endl;
      cout << "Arrival Time: " << airport_one[i].arrival_time.hour <<
      ":" << airport_one[i].arrival_time.minute << airport_one[i].arrival_time.am_pm <<
      " (" << airport_one[i].arrival_time.month << "/" << airport_one[i].arrival_time.day <<
      "/" << airport_one[i].arrival_time.year << ")" << endl;
      cout << endl;
    }
  }
  for(int i = 0; i < 2; ++i) {
    if(airport_two[i].flight_number > 10000) {
      cout << "Flight_Number: " << airport_two[i].flight_number << endl;
      cout << "From: " << airport_two[i].original_airport_code;
      cout << " To: " << airport_two[i].destination_airport_code << endl;
      cout << "Departure Time: " << airport_two[i].departure_time.hour <<
      ":" << airport_two[i].departure_time.minute << airport_two[i].departure_time.am_pm <<
      " (" << airport_two[i].departure_time.month << "/" << airport_two[i].departure_time.day <<
      "/" << airport_two[i].departure_time.year << ")" << endl;
      cout << "Arrival Time: " << airport_one[i].arrival_time.hour <<
      ":" << airport_two[i].arrival_time.minute << airport_two[i].arrival_time.am_pm <<
      " (" << airport_two[i].arrival_time.month << "/" << airport_two[i].arrival_time.day <<
      "/" << airport_two[i].arrival_time.year << ")" << endl;
      cout << endl;
    }
  }
}

int main() {
  // Exercise 11-1
  const int MAX_ENTRIES = 20;
  mailing_list my_list[MAX_ENTRIES];
  my_list[0] = {
    "David Welsh",
    "123 Merrybelle Lane",
    "PO #123",
    "Camden",
    "OH",
    12345
  };
  cout << my_list[0].name << endl;
  cout << endl;

  // Exercise 11-2
  time_stamp first = {11, 45, "AM", 7, 2, 2022};
  time_stamp second = {7, 15, "PM", 7, 14, 2022};
  cout << time_difference(first, second) << " minutes difference." << endl;
  cout << endl;

  // Exercise 11-3;
  airline_reservation KALISPELL[2];
  airline_reservation SFO[2];
  airline_reservation KENNEDY[2];

  KALISPELL[0] = {54673, "EFG", "456", time_stamp{8, 25, "AM", 7, 1, 2022}, time_stamp{2, 15, "PM", 7, 1, 2022}};
  SFO[0] = {12345, "ABC", "123", time_stamp{5, 40, "AM", 7, 1, 2022}, time_stamp{6, 35, "AM", 7, 1, 2022}};
  SFO[1] = {15123, "ABC", "123", time_stamp{3, 15, "PM", 9, 12, 2022}, time_stamp{9, 55, "PM", 9, 12, 2022}};
  KENNEDY[0] = {67891, "123", "ABC", time_stamp{7, 00, "AM", 11, 20, 2022}, time_stamp{11, 10, "AM", 11, 20, 2022}};
  KENNEDY[1] = {38281, "123", "ABC", time_stamp{10, 05, "AM", 12, 21, 2022}, time_stamp{12, 45, "PM", 12, 21, 2023}};

  flights_list(SFO, KALISPELL);
}

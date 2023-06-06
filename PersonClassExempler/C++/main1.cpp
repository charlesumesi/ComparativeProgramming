#include <iostream>
#include <string>
#include "Person_C++Example1.h"
using namespace std;

void Person::just_firstandlast(string first, string last) {
  cout << first + " " + last;
}

void Person::full(string first, string last, string age, string gender, string interests) {
  string a = "is a";
  string b = "year old";
  string c = "interested in";
  string space = " ";
  string comma = ", ";

  string array[8] = {first, last, a, age, b, gender, c, interests};

  for (int i = 0; i < 8; i++) {
    if (i != 5) {
      cout << array[i] + space;
    } else {
      cout << array[i] + comma;
    }
  }
}

int main() {
  // Person instance (object)
  Person han;

  han.just_firstandlast("Han", "Solo");
  cout << "\n";
  han.full("Han", "Solo", "30", "man", "flying spaceships");

  return 0;
}

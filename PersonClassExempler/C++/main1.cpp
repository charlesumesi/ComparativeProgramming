#include <iostream>
#include <string>
#include "Person_C++Example1.h"
using namespace std;

int main() {
  // Person instance (object)
  Person han;

  han.just_firstandlast("Han", "Solo");
  cout << "\n";
  han.full("Han", "Solo", "30", "man", "flying spaceships");

  return 0;
}

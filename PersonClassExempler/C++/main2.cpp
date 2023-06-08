#include <iostream>
#include <string>
#include "Person_C++Example2.h"
using namespace std;

int main() {
  // Student instance (object)
  Student peter;

  peter.just_firstandlast("Peter", "Davis");
  cout << "\n";
  peter.full("Peter", "Davis", "15", "teenager", "football");

  return 0;
}
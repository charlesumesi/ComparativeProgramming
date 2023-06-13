#include <iostream>
#include <string>
#include "Person_C++Example3b.h"
using namespace std;

int main() {

  // Teacher instance (object) 
  Teacher william;

  william.just_firstandlast("William", "Hunt");
  cout << "\n";
  william.intro("William", "Hunt", "Chemistry");
  cout << "\n";
  william.full();

  return 0;
}
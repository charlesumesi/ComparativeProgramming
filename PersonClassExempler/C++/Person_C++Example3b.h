#include "Person_C++Example3a.h"
#include <string>
#include <iostream>

// New class inherits only methods in the public domain of Person2 whilst Assistant handles the exception due to attempted access to the private domain of Person2
class Teacher: public Person2, public Assistant {
  public:
    void intro(std::string first, std::string last, std::string subject) {
      std::string space = " ";
      std::string teaches = "teaches";

      std::string array[4] = {first, last, teaches, subject};

      for (int i = 0; i < 4; i++) {
        if (i < 3) {
          std::cout << array[i] + space;
        } else {
          std::cout << array[i];
        };
      }  
    }
};
#include <string>
#include <iostream>

// Parent class
class Person2 {
  public:
    void just_firstandlast(std::string first, std::string last) {
      std::cout << first + " " + last;
    };
  private:
    void full2(std::string first, std::string last, std::string age, std::string gender, std::string interests) {
      std::string a = "is a";
      std::string b = "year old";
      std::string c = "interested in";
      std::string space = " ";
      std::string comma = ", ";

      std::string array[8] = {first, last, a, age, b, gender, c, interests};

      for (int i = 0; i < 8; i++) {
        if (i != 5) {
          std::cout << array[i] + space;
        } else {
          std::cout << array[i] + comma;
        }
      }
    };
    friend class Assistant;  // Handles the exception when access to the private domain of Person2 is attempted
};

class Assistant {
  public:
    void full() {
      std::cout << "The \"full\" method is not available to the Teacher class";
    }
};
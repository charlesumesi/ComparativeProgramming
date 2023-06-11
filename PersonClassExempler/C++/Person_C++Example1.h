#include <string>
#include <iostream>

// Parent class
class Person {
  public:
    void just_firstandlast(std::string first, std::string last) {
      std::cout << first + " " + last;
    };
    void full(std::string first, std::string last, std::string age, std::string gender, std::string interests) {
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
};

const student = require("./Person_JSExample1");

// New class inherits all methods in Person
class Student extends student.Person {
  constructor(first, last, age, gender, interests) {
    super(first, last, age, gender, interests)
  }
}

module.exports = { Student }
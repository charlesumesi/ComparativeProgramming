const person3 = require("./Person_JSExample1");

// Inherits methods from Person but not all are implemented
class Teacher extends person3.Person {
  constructor(first, last, subject) {
    super(first, last) // What is being inherited from Person
    this.subject = subject;
  }

  full() {
    if (this.age || this.gender || this.interests == undefined) {
      console.log("The \"full\" method has not been implemented in the Teacher class");
    }
  }

  just_firstandlast() {
    return this.first + ' ' + this.last;
  };

  intro() {
    console.log(`${this.first} ${this.last} teaches ${this.subject} `)
  }
}

module.exports = { Teacher }
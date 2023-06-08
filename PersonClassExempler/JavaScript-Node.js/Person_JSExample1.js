// Parent class
class Person {
  constructor(first, last, age, gender, interests) {
    this.first = first
    this.last = last;
    this.age = age;
    this.gender = gender;
    this.interests = interests;
  }

  just_firstandlast() {
    return this.first + ' ' + this.last;
  };

  full() {
    this.a = 'is a';
    this.b = 'year old';
    this.c = 'interested in';
    console.log(`${this.first} ${this.last} ${this.a} ${this.age} ${this.b} ${this.gender}, ${this.c} ${this.interests}`);
  };
}

module.exports = { Person }

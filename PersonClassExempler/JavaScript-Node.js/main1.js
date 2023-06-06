const person = require("./Person_JSExample1");

// Person instance (object)
const han = new person.Person('Han', 'Solo', '30', 'man', 'flying spaceships');

console.log(han.just_firstandlast());
han.full()
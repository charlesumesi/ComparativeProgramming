import Person_PythonExample1 as person3

# Partially inheriting from Person
class Teacher:
    def __init__(self, first, last, subject):
        self.first = first
        self.last = last
        self.subject = subject
    
    just_firstandlast = person3.Person.__dict__["just_firstandlast"]  # Select the method you want to inherit (aka 'mixin')
    
    def intro(self):
        print(f'{self.just_firstandlast()} teaches {self.subject}')
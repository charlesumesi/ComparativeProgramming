# Parent class
class Person:
    def __init__(self, first, last, age, gender, interests):
        self.first = first
        self.last = last
        self.age = age
        self.gender = gender
        self.interests = interests
        
    def just_firstandlast(self):
        return(self.first + ' ' + self.last)
    
    def full(self):
        a = 'is a'
        b = 'year old'
        c = 'interested in'
        print(f'{Person.just_firstandlast(self)} {a} {self.age} {b} {self.gender}, {c} {self.interests}')
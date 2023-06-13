from Person_PythonExample3 import Teacher

# Teacher instance (object)
william = Teacher('William', 'Hunt', 'chemistry')

print(william.just_firstandlast())
william.intro()
try:
    william.full()
except:
    print('Teacher does not have an attribute called \'full\'')
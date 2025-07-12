print("Hello World!")

#This is a comment, it will be ignored by the program!

if 10 > 6:
         print("Ten is greater than 6!")

# THIS IS INCORRECT INDENTATION!!!
#if 5 > 1:
#print("Five is greater than one!")

# Variables
x = 5
y = "I am afriad to admit that I like to code in PHP as well as Python!"
# Variables can change
x = 2
# Variable Casting
x = str (2) # x will be '2'
y = int (6) # y will be 6
z = float (9) # z will be 9.0
# To find the variable type:
x = 25
y = "Jason"
print(type(x))
print(type(y))
# String variables are declared using either single or double quotes
x = "Jason"
# Is the same as:
x = 'Jason'
# Variables are case sensitive in Python:
b = 420
B = "BobSaget"

# Python variable name rules are as follows:

# A variable name must start with a letter or an underscore character.
# Variables cannot start with a number
# Variables can only contain alpha-numeric characters and underscores (A-z, 0-9, and _)
# Variable names are case sensitive as mentioned before
# Variable names cannot be any of the Python keywords 

# Assign multiple values
x, y, z = "Kush", "Sativa", "Indica"
print (x)
print (y)
print (z)
# One value to multiple variables
x = y = z = "Marijuana"
print (x)
print (y)
print (z)
# Creating a list and unpacking it
strains = ["skywalker", "GDP", "OGKush"]
x, y, z = strains
print (x)
print (y)
print (z)
# Addition for numbers
x = 20
y = 60
print(x+y)

def thisfunc():
  print(x + y)

thisfunc()

# Imports argv from sys module for command line parsing
from sys import argv

# Reads name of the script file and another string for the filename
script, filename = argv

# Open the specified filename as a file object
txt = open(filename)

print "Here's your file %r:" % filename
print txt.read()


the_count = [1, 2, 3, 4, 5]
fruits = ['apples', 'oranges', 'pears', 'apricots']
change = [1, 'pennies', 2, 'dimes', 3, 'quarters']

# This first kind of for-loop goes through a list
for number in the_count:
    print "This count %d" % number

# Same as above
for fruit in fruits:
    print "A fruit of type %s" % fruit

# Also we can go through mixed lists too
# Notice we have to use %r since we don't know what's in the list
for i in change:
    print "I got %r" % i

# We can also build lists, first start with an empty one
elements = []

# Then use the range function to do 0 to 5 counts
for i in range (0, 6):
    print "Adding %d to the list." % i
    # Append is a function that lists understand
    elements.append(i)

# Now we can print them out too
for element in elements:
    print "Element was: %d" % element


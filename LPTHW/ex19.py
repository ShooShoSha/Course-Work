# Function that outputs message about number of cheeses and crackers one owns.
def cheese_and_crackers(cheese_count, boxes_of_crackers):
    print "You have %d chesses!" % cheese_count
    print "You have %d boxes of crackers!" % boxes_of_crackers
    print "Man that's enough for a party!"
    print "Get a blanket.\n"

# Pass literals to function
print "We can just give the function numbers directly:"
cheese_and_crackers(20,30)

# Assign and pass variables
print "OR, we can use variables from our script:"
amount_of_cheese = 10
amount_of_crackers = 50
cheese_and_crackers(amount_of_cheese, amount_of_crackers)

# Use expressions as arguments
print "We can even do math inside too:"
cheese_and_crackers(10+20, 5+6)

# Combine variables, literals, and expressions
print "And we can combine the two, variables and math:"
cheese_and_crackers(amount_of_cheese + 100, amount_of_crackers + 1000)


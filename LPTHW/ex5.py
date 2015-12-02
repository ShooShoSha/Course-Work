name = "Kevin P. O'Brien"
age = 24
height = 70
height_cm = height * 2.54
weight = 155
weight_kg = weight / 2.2046
eyes = 'Blue'
teeth = 'Gross'
hair = 'Brown'

print "Let's talk about %s." % name
print "He's %d inches tall (%d centimeters)." % (height, height_cm)
print "He's %d pounds heavy (%d kilograms)." % (weight, weight_kg)
print "Actually that's not too heavy."
print "He's got %s eyes and %s hair." % (eyes, hair)
print "His teeth are %s, but he's getting better at it." % teeth

print "If I add %d, %d, and %d I get %d." % (age, height, weight, age + height + weight)


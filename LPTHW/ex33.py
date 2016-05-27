def get_numbers(value, increment = 1):
	i = 0 
	numbers = []

	while i < value:
		print "At the top is %d" % i
		numbers.append(i)

		i += increment
		print "Numbers now: ", numbers
		print "At the bottom i is %d" % i
	return numbers

print "The numbers: "

for number in get_numbers(6,2):
    print number


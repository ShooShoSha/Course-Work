# Chapter 6 Exercises

1. Type in and run the 10 programs presented in this chapter. Compare the 
output produced by each program with output presented after each program in the
text. Try experimenting with each program by keying in values other than those
shown.
2. Write a program that asks the user to type in two integer values at the
terminal. Test these two numbers to determine if the first is evenly divisible
by the second, and then display an appropriate message at the terminal.
3. Write a program that accepts two integer values typed in by the user. 
Display the result of dividing the first integer by the second, to three-
decimal-place accuracy. Remember to have the program check for division by
zero.
4. Write a program that acts as a simple _printing_ calculator. The program
should allow the user to ype in expressions of the form `number operator` The
following operators should be recognized by the program: `=` `-` `*` `/` `S` 
`E`. The `S` operator tells the program to set the _accumulator to the typed-in
number. The `E` operator tells the program that execution is to end. The 
arithmetic operations are performed on the contents of the accumulator with the
number that was keyed in acting as the second operand. The following is a 
sample run showing how the program should operate:

	```
	Begin calculations
	10 S
	= 10.000
	2 /
	= 5.000
	55 -
	= -50.000
	100.25 S
	= 100.250
	4 *
	= 401.000
	0 E
	= 401.000
	End calculations
	```
Make certain that the program detects division by zero and also checks for 
unknown operators.
5. You developed [Program 5.9](../5/Samples/pgm5-9.c) to reverse the digits of
an integer typed in from the terminal. However, this program does not function 
well if you type in a negative number. Find out what happens in such a case and
then modify the program so that negative numbers are correctly handled. For
example, if the number -8645 is typed in, the output of the program should be
5468-.
6. Write a program that takes an integer keyed in from the terminal and 
extracts and displays each digit of the integer in English. So, if the user
types in 932 the program should display `nine three two`. Remember to display
_zero_ if the user types in a 0. (_Note:_ This exercise is a hard one!)
7. [Program 6.10](Samples/pgm6-10.c) has several inefficiencies. One
inefficiency results from checking even numbers. Because it is obvious that any
even number greater than 2 cannot be prome, the program should simply skip all
even numbers as possible primes _and_ as possible divisors. The inner `for` 
loop is also inefficient because of the value of `p` is _always_ divided by all
values of `d` from 2 through `p-1`. This inefficiency could be avoided by 
adding a test for the value of `isPrime` in the conditions of the `for` loop. 
In this manner, the `for` loop could be set up to continue as long as no 
divisor was found and the value of `d` was less than `p`. Modify 
[Program 6.10](Samples/pgm6-10.c) to incorporate these two changes. Then run 
the program to verify its operation (_Note:_ In [Chapter 7](../7), you discover
even more efficient ways of generating prime numbers).

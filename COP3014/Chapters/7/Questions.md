# Chapter 7 Exercises

1. Type in and run the 8 programs presented in this chapter. Compare the output
produced by each program with the output presented after each program in the 
text.
2. Modify [Program 7.1](Samples/pgm7-1.c) so that the elements of the array 
`values` are initially set to `0`. Use a `for` loop to perform the 
initialization.
3. [Program 7.2](Samples/pgm7-2.c) permits only 20 responses to be entered. 
Modify that program so that any number of responses can be entered. So that the
user does not have to count the number of responses in the list, set up the
program so that the value `999` can be keyed in by the user to indicate that 
the last response has been entered (_Hint:_ You can use the `break` statement
here if you want to exit your loop).
4. Write a program that calculates the average of an array of 10 floating-point
values.
5. What output do you expect from the following program?

	```C
	#include <stdio.h>
	
	int main(void)
	{
	    int numbers[10] = {1,0,0,0,0,0,0,0,0,0};
	    int i, j;

	    for(j = 0; j < 10;  ++j)
	    	for(i = 0; i < j; ++i)
	    		numbers[j] += numbers[i];

	    for(j = 0; j < 10; ++j)
		printf("%i ", numbers[j]);
	    printf("\n");

	    return 0;
	}
	```
6. You don’t need to use an array to generate Fibonacci numbers.You can simply 
use three variables: two to store the previous two Fibonacci numbers and one 
to store the current one. Rewrite [Program 7.3](Samples/pgm7-3.c) so that 
arrays are not used. Because you’re no longer using an array, you need to 
display each Fibonacci number as you generate it.
7. Prime numbers can also be generated by an algorithm known as the 
_Sieve of Erastosthenes_. The algorithm for this procedure is presented here. 
Write a program that implements this algorithm. Have the program find all 
prime numbers up to `n = 150`. What can you say about this algorithm as 
compared to the ones used in the text for calculating prime numbers?

	__Sieve of Erastosthnes Algorithm__
	__To Display All Prime Numbers Between 1 and n__
	1. Define an array of integers __P__. Set all elements __P<sub>i</sub>__ to 
	__0, 2 <= i <= n__.
	2. Set __i__ to 2.
	3. If __i > n__, the algorithm terminates.
	4. If __P<sub>i</sub>__ is 0, then __i__ is prime.
	5. For all positive integer values of __j >= i__, such that __i * j <= n__, set 
	__P<sub>i*j</sub>__ to 1.
	6. Add 1 to __i__ and go to step 3. 



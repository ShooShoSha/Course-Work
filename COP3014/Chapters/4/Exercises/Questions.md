# Chapter 4 Exercises
1. Type in and run the five programs presented in this chapter. Compare the 
output produced by each program with the output presented after each program in 
the text.
2. Which of the following are invalid variable names? Why?
	`Int`
	`calloc`
	`floating`
	`ReInitialize`
	`char`
	`Xx`
	`_1312`
	`_`
	`6_05`
	`alpha_beta_routine`
	`z`
	`A$`
3. Which of the following are invalid constants? Why?
	`123.456`
	`0x10.5`
	`0X0G1`
	`0001`
	`0xFFFF`
	`123L`
	`0Xab05`
	`0L`
	`-597.25`
	`123.5e2`
	`.0001`
	`+12`
	`98.6F`
	`98.7U`
	`17777s`
	`0996`
	`-12E-12`
	`07777`
	`1234uL`
	`1.2Fe-7`
	`15,000`
	`1.234L`
	`197u`
	`100U`
	`0XABCDEFL`
	`0xabcu`
	`+123`
4. Write a C program that converts 27&#176; from degrees Fahrenheit (F) to degrees 
Celsius (C) using the following formula:

	> C = (F - 32) / 1.8

5. What output would you expect from the following program:
	```C
	#include <stdio.h>

	int main(void)
	{
		char c,d;

		c = 'd';
		d = c;
		printf("d = %c\n", d);

		return 0;
	}
	```
6. Write a program to evaluate the polynomial shown here:

	> 3x<sup>3</sup> - 5x<sup>2</sup> + 6, where x = 2.55

7. Write a program that evaluates the following expression and displays the 
results (remember to use exponential format to display the result):

	> (3.31 x 10<sup>-8</sup> x 2.01 x 10<sup>-7</sup>)  / (7.16 x 10<sup>-6</sup> + 2.01 x 10<sup>-8</sup>)

8. To round off an integer `i` to the next largest even multiple of another integer `j`, the following formula can be used: `Next_multiple = i + j - i  % j`.
For example, to round off 256 days to the next largest number of days evenly divisble week, values of `i = 256` and `j = 7` can be substituted into the preceding formula as follows:
	```
	Next_multiple = 256 + 7 - 256 % 7
		        = 256 + 7 - 4
		        = 259
	```
Write a program to find the next largest even multiple for the following values of `i` and `j`:

	i | j
	--- | ---
	365 | 7
	12,258 | 23
	996 | 4

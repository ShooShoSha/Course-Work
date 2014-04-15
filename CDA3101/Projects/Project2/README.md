# Project 2

## Floats and K-Maps

### Name ______________________________

### Objective
Show understanding of material in chapter and discussions in class.

### Submission
Print a hardcopy showing your work (steps taken to get to your answer). Submit
to instructor at beginning of class.

### Due
Tuesday February 4, at start of class

### Specification
1. Show how the value `-107.125` would be stored as a 32-bit floating point 
number. Give your answer in both binary and hexadecimal (Note: In hexadecimal
the 32-bits are simply converted to 8 hex digits).
2. Given the following truth table, generate the required sum of product terms
for the solution. Then draw the corresponding K-map simplified solution and the
resulting circuit diagram.
	
	X | Y | Z | Out | Sum of Products
	--- | --- | --- | --- | --- |
	0 | 0 | 0 | **1** | 
	0 | 0 | 1 | **1** | 
	0 | 1 | 0 | **0** | 
	0 | 1 | 1 | **1** | 
	1 | 0 | 0 | **1** | 
	1 | 0 | 1 | **0** | 
	1 | 1 | 0 | **1** | 
	1 | 1 | 1 | **0** | 
3. Design a digital black box to perform the following function: The black box 
will have four inputs representing a binary number in the range 0-15. It will 
have four outputs representing a binary number in the range 0-15. Think of these 
as unsigned integers. The number at the output should always be _3 less_ than the 
number at the input. For example, if the input is 8, the output is 5; if the 
input is 5, the output is 2; if the input is 3, the output is 0; if the input is 
2, the output is 15; if the input is 1, the output is 14. Notice that the result 
should be circular (wrap around).
	* This problem is different than class samples: they had only one output, 
this has four. To solve this problem, draw a truth table with four inputs and four 
outputs. Then proceed to **find a solution for each of the four outputs** 
independently (think of it as 4 problems).
	* Each output should have its own truth table, K-map, simplified expression
and circuit
	* To help the grader name the inputs A, B, C, and D. Name the outputs W, X, Y, and Z
		* Notice that A and W should be the most significant digits

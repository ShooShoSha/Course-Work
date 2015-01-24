# Chapter 8 Exercises
1. Type in and run the 16 programs presented in this chapter. Compare the output
produced by each program with the output presented after each program in the 
text.
2. Modify [Program 8.4](Samples/pgm8-4.c) so the value of `triangularNumber` is
returned by the function. Then go back to [Program 5.5](../5/Samples/pgm5-5.c)
and change that program so that it calls the new version of the 
`calculateTriangularNumber` function.
3. Modify [Program 8.8](Samples/pgm8-8.c) so that the value of `epsilon` is
passed as an argument to the function. Try experimenting with different values
of `epsilon` to see the effect that it has on the value of the square root.
4. Modify [Program 8.8](Samples/pgm8-8.c) so that the value of `guess` is 
printed each time through the `while` loop. Notive how quickly the value of 
`guess` converges to the square root. What conclusions can you reach about the 
number of iterations through the loop, the number whose square root is being 
calculated, and the value of the initial guess?
5. The criteria used for termination of the loop in the `squareRoot` function of
[Program 8.8](Samples/pgm8-8.c) is not suitable for use when computing the 
square root of very large or very small numbers. Rather than comparing the 
_difference_ between the value of `x` and value of `guess`<sup>2</sup>, the
program should compare the _ratio_ of the two values to 1. The closer this ratio
gets to 1, the more accurate the approximation of the square root. Modify
[Program 8.8](Samples/pgm8-8.c) so this new termination criteria is used.
6. Modify [Program 8.8](Samples/pgm8-8.c) so that the `squareRoot` function accepts a double precision argument and returns the result as a double precision value. Be certain to change the value of the variable `epsilon` to reflect the fact that double precision variables are now being used.
7. Write a function that raises an integer to a positive integer power. Call the function `x_to_the_n` taking two integer arguments `x` and `n`. Have the function return a `long int`, which represents the results of calculating `x`<sup>`n`</sup>`.
*. An equation of the form `ax`<sup>`2`</sup>` + bx + c = 0` is known as a _quadratic` equation. The values _a_, _b_, and _c_ in the preceding example represent constant values. So `4x`<sup>`2`</sup>` - 17x - 15 = 0` represents a quadratic equation where _a_ = 4, _b_ = -17, and _c_ = -15. The values of _x_ that satisfy a particular quadratic equation, known as the _roots_ of the equation, can be calculated by substituting the values of _a_, _b_, and _c_ into the following two formulae: 

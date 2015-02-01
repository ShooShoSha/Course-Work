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
7. Write a function that raises an integer to a positive integer power. Call the function `x_to_the_n` taking two integer arguments `x` and `n`. Have the function return a `long int`, which represents the results of calculating `x`<sup>`n`</sup>.
8. An equation of the form 
> ax<sup>2</sup> + bx + c = 0 
is known as a _quadratic` equation. The values _a_, _b_, and _c_ in the preceding example represent constant values. So `4x`<sup>`2`</sup>` - 17x - 15 = 0` represents a quadratic equation where _a_ = 4, _b_ = -17, and _c_ = -15. The values of _x_ that satisfy a particular quadratic equation, known as the _roots_ of the equation, can be calculated by substituting the values of _a_, _b_, and _c_ into the following two formulae: 
  > If the value of _b<sup>2</sup>-4ac_, called the _discriminant_, is less than zero, the roots or the equation, _x<sub>1</sub>_ and _x<sub>2</sub>_, are imaginary numbers.

  > ![Quadratic Formula](http://upload.wikimedia.org/wikipedia/commons/c/c4/Quadratic_formula.svg)

  Write a program to solve a quadratic equation. The program should allow the user to enter the values for _a_, _b_, and _c_. If the discriminant is less than zero, a message should be displayed that the roots are imaginary; otherwise, the program should then proceed to calculate and display the two roots of the equation. (_Note:_ Be certain to make use of the `squareRoot` funcion that you developed in this chapter).
9. The least common multiple (_lcm_) of two positive integers _u_ and _v_ is the smallest positive integer that is evenly divisible by both _u_ and _v_. Thus, the _lcm_ of 15 and 10, written _lcm_(15,10), is 30 because 20 is the smallest integer divisible by both 15 and 10. Write a function `lcm` that takes two integer arguments and returns their _lcm_. the `lcm` function should calculate the least common ultiple by calling the `gcd` finction from [Program 8.6](Samples/pgm8-6.c) in accordance with the following identity:

  > _`lcm (u, v) = uv / gcd (u, v) where u, v >= 0`_

10. Write a function `prime` that returns 1 if the argument is a prime number and returns 0 otherwise.
11. Write a function called `arraySum` that takes two arguments: an integer array and the number of elements in the array. Have the function return as its result the sum of the elements in the array.
12. A matrix _M_ with _i_ rows, _j_ columns can be _transposed_ into a matrix _N_ having _j_ rows and _i_ columns by simply setting the value of _N_<sub>_a,b_</sub> equal to the value of _M_<sub>_b,a_</sub> for all relevant values of _a_ and _b_.
  * Write a function `transposeMatrix` that takes as an argument a 4 x 5 matrix and a 5 x 4 matrix. Have the function transpose the 4 x 5 matrix and store the results in the 5 x 4 matrix. Also write a `main` routine to test the function.
  * Using variable-length arrays, rewrite the `transposeMatrix` function developed in exercise 12a to take the number of rows and columns as arguments, and to transpose the matrix of the speficied dimensions.
13. Modify the `sort` function from [Program 8.12](Samples/pgm8-12.c) to take a thrid argument indicating the array is to be sorted in ascending or descending order. Then modify the sort algorithm to correctly sort the array into the indicated order.
14. Rewrite the functions developed in the last four exercises to use global variables instead of arguments. For example, the preceeding exercise (13) should now sort a globally defined array.
15. Modify [Program 8.14](Samples/pgm8-14.c) so that the user is reasked to type in the value of the base if an invalid base is entered. The modified program should continue to ask for the value of the base until a valid response is given.
16. Modify [Program 8.14](Samples/pgm8-14.c) so that the user can convert any number of integers. Make the provision for the program to terminate when a zero is typed in as the value of the number converted.

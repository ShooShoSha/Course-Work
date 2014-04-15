# Project 7

## MIPS 3

### Due
* April 25, before 5:00 PM
* No late submissions

### Objective
Write a MIPS assembly language program which will prompt the user for a 
floating point number. Then take the 32 bits from the floating point number
and display it as three (3) separate parts:
* sign
* exponent
* fraction

### Specification
Here is a sample of how to input and store a floating point number in MIPS:
```
li   $v0, 6    # OS service number 6
syscall        # OS leaves float in $f0
s.s  $f0, num  # stores the sigle precision float in num
lw   $a0, num  # loads the 32 bits into an integer register
```
Note: You can define the variable `num` with `.word` or `.float`

Display the three (3) parts of the floating point number in two (2) ways
* First
   * Display the **actual 32 bits stored in memory**
      * one bit sign
      * eight bit exponent
      * twenty-three bit fraction
* Second
   * Display what **each value represents**
      * For the sign, display either a plus (+) or minus (-) sign
      * For the exponent, display the actual exponent after the bias is 
subtracted
         * Display the exponent in base 10 with a plus (+) or minus (-) sign
      * For the fraction, display the _implied 1_ along with the 23 bits 
actually stored

You may assume all data will be entered correctly (no error testing needed). You 
may assume all values entered will fit into a 32-bit float. The values entered 
may be negative or positive. Allow the user an opportunity to process multiple 
values. Use at least three functions for logical operations. The algorithm for this 
program is tricky. Be sure you understand it before you start coding. Format the 
output neatly.

### Grading
#### Sample Run
```
Please enter a base 10 (decimal) floating point number:
27.625

Actual 32 bits stored in the floating point number:

    Sign (Bit 31)         : 0
    Exponent (Bits 30-23) : 10000011  
    Fraction (Bits 22-0)  : 10111010000000000000000

Values represented by float:

    Sign     : +
    Exponent : +4
    Fraction : 1.10111010000000000000000

Would you like to do another (y or n)? y

Please enter a base 10 (decimal) floating point number:
-0.002

Actual 32 bits stored in the floating point number:

    Sign (Bit 31)         : 1
    Exponent (Bits 30-23) : 01110110   
    Fraction (Bits 22-0)  : 00000110001001001101111

Values represented by float:

    Sign     : -
    Exponent : -9
    Fraction : 1.00000110001001001101111

Would you like to do another (y or n)? n
```

### Suggestions
Feel free to use any instruction that you like. You are not limited to what we
have discussed in class. There is a complete list of instructions in the MARS
help files.

### Reminder
This is not a group project. You should not show anyone else your code and you 
should not look at anyone else's code. Discuss ideas, not code. If you start
writing code down with someone else, you've gone too far.

### Style and Format
* Be sure to include appropriate documentation
    * Include enough comments for another programmer to easily follow your logic
    * Include basic information at the beginning of your program,
        * Name
        * Date
        * Course
        * Project #
* Format your code as discussed in class
    * Use consistent alignment and spacing

### Submission
* Submit your project using the eLearning dropbox
  * No late submissions will be accepted
* Submit a `.zip` archive containing your `.s` file
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_7.zip`)

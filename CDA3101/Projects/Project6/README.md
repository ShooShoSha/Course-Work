# Project 6

## MIPS 2

### Due
* April 11, before 5:00 PM
* April 14, before 5:00 PM (for late submissions)

### Objective
Write a MIPS assembly language program which will allow the user to view **one word**
of memory. Your program should prompt the user for a memory address which will be
entered as a hexadecimal and then prompt the user for a format for the output of the
contents of that memory address. Your program should then display bothe the address and
contents. Notice that the address may refer to a section of the code segment, the data
segment, or the stack segment.

### Specification
* Print an appropriate header before each display (different for each type of output)
* Each display should start with address, showing hight (8) hexadecimal digits
   * Include 0x and dislay all eight (8) hex digits
* Display the contents of that memory location in the desired format
   * hexadecimal (same format as address)
   * one 32-bit decimal integer (signed, no leading zeros)
   * four separate decimal integers representing the four bytes stored in the word
* Notice that all displays are for one word (32 bits) of memory
* Assume that the user enters addresses in this format: `0x10010000`
   * Also the user requests **only legal address** (no error checking)
* Use **at least three (3)** procedures to simplify and organize the code (`jal` and `jr`)
* For this project, you need not pass parameters or return values
* Use main to primarily call procedures
   * Keep main as simple as possible
* Allow the user to make multiple selections
   * Use a large loop in main

### Grading
#### Sample Run
##### Output
```
Address    Hexadecimal
0x0040000c 0x3c011001

Address    Decimal
0x10010014 756

Address    Bytes
0x10010018 10 51 50 49
```

### Suggestions
Feel free to use any instruction that you like. You are not limited to what we
have discussed in class. There is a complete list of instructions in the MARS
help files.
* Try writing the program in a high-level language or psedocode first then translate
* Use procedures extensively
* Get **one piece** of the program working at a time

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
  * Notice there is a dropbox for late submissions
* Submit a `.zip` archive containing your `.s` file
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_6.zip`)

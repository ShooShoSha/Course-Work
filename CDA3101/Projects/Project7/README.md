# Project 5

## MIPS 1

### Due
* March 31, before 5:00 PM
* April 1, before 5:00 PM (for late submissions)

### Objective
Write a MIPS assembly language program using the MARS simulator which will 
prompt the user for a string and then process the string one character at a time
to display some specific information.

### Specification
1. Display a meaningful prompt asking the user to enter up to 40 characters
2. Accept no more thatn 40 characters
3. Count the number of occurences of each these categories of characters:
    * Digits (0-9)
    * Uppercase letters (A...Z)
    * Lowercase letters (a...z)
    * Spaces
    * All other characters
4. Display the results of your analysis
5. Display the original message.

### Grading
#### Sample Run
##### Input
`Hello There CB483?`
##### Output
```
Total Characters entered : 18
Digits                   : 3
Uppercase letters        : 4
Lowercase Letters        : 8
Spaces                   : 2
Other Characters         :
Most Common type         : Lowercase Letters
Original String          : Hello There CB483?
```
#### Challenge
Include a statement indicating the most commonly occurring type of character.

#### Tests
Some strings that may be used to test the program:
`123  DONE?by?`

### Notes
Feel free to use any instruction that you like. You are not limited to what we
have discussed in class. There is a complete list of instructions in the MARS
help files.
* Do not count the enter key or a null terminator as a character.
    * What happens with non-printing characters?

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
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_2.zip`)

# Project 5

Chapters 10-11 --- Strings and Pointers

## Due
* March 21, before 5 PM
* March 24, before 5 PM (for late submissions) 

## Objective

Write a C program that implements and tests the three C functions described in 
problems 5, 6 and 7 on page 231 of the text. Here are the prototypes:

```C
// find second string in first
// return index where string starts or -1 if not found
int findString(char *, char *);

// remove specified number of characters starting at
// a specified index.
// first int is starting index, second is count
// if failure, do nothing
void removeString(char *, int, int);

// insert the second string into the first starting
// at the specified index
// if failure, do nothing
void insertString(char *, char *, int);
```

## Test Program

Here is a test program to help you get started testing. As you get this to 
work, you can add more of your own tests.

`Project5/Tester main.c`
`Project5/GraderMain.c`

## Specification
1. For this project, the purpose of "main" is to simply test the three 
functions. Do not have the user supply data to main.
2. One additional requirement beyond what is stated in the text is that square 
brackets `[ ]` are not allowed in any of the three functions. In other words, 
use pointers to access the character strings rather than array notation.

NOTE: Square brackets are fine in "main".
3. Do not use any of the (string.h) library functions within your functions. 
Note, you may use those functions in "main" if you like.
4. Use the exact prototypes provided above.
5. You may have as many additional functions as you like. You are not limited 
to these three. (these are often called helper functions or utility functions)

## Challenge
In case you are bored over spring break, try problem number 8 in the text 
asks you to write a "replaceString" function. Give it a try.

## Reminder
This is not a group project. You should not show anyone else your code and you 
should not look at anyone else's code. Discuss ideas, not code. If you start
writing code down with someone else, you've gone too far.

## Style and Format
* Be sure to include appropriate documentation (header comments as described in 
Project 1)
* Format your code as discussed in class. For example, curly braces should line 
up and all blocks of code should be indented to appropriate level.

## Submission
* Submit your project using the eLearning dropbox
* Notice that there is a dropbox for late submissions
* For this project simply submit the file containing your source code (.c)

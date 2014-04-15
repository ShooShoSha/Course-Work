# Project 4

## MARIE Assembly Language

### Due
* March 20, before 5:00 PM
* March 21, before 5:00 PM (for late submissions)

### Objective
Practive with assembly language using _MARIE_.

### Specification
Write a program in MARIE assembly language which will allow the user to enter a
series of nonnegative integers. The user will enter a negative value as a 
sentinel indicating all numbers have been entered. The negative value is not 
part of the valid data.

When all numbers have been entered, print the following information:
1. How many numbers were entered
2. The sum of all the numbers
3. The largest number entered

Remember that MARIE does not give you an easy way to print a prompt, so we 
assume that the user _magically_ knows what they are suppose to do. Also, the
output will include only the three numbers. Be sure to print them in the order
specified above.

Remeber that in MARIE the input and output windows can be set to Hex, Dec, or
ASCII. Notice also that the memory display in MARIE is in hexadecimal.

### Grading
#### Input
47

31

28

-3

#### Output
3

106

47


### Reminder
This is not a group project. You should not show anyone else your code and you 
should not look at anyone else's code. Discuss ideas, not code. If you start
writing code down with someone else, you've gone too far.

### Style and Format
* Be sure to include appropriate documentation
* Format your code as discussed in class

### Submission
* Submit your project using the eLearning dropbox
  * Notice there is a dropbox for late submissions
* Submit a `.zip` archive containing the `.mas` file
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_4.zip`)
* If you have a problem, save and submit your code in a `.txt` file

### Suggestions
* Get one small piece of the program working at a time
* Create an infinite loop that inputs numbers
* Make the loop stop on a sentinel value
* Calculate the total of the numbers
* Find the largest number

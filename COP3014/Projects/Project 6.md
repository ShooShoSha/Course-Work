# Project 6

## Due
* April 4, before 5 PM
* April 7, before 5 PM (for late submissions)

## Objective
Write a C program that assists an instructor in reporting student results for a course.

For each student the instructor will supply the following information:
* student id
* first name
* last name
* three exam scores

## Specification
* Names have a maximum length of 20 characters (20 for first, 20 for last)
* Student ID's are integers
* Each student has exactly three exam scores (use type double)
* The course has a maximum of 10 students

You must store the information about each student in a single struct.

To make testing and grading this project easier, you must ask for the items in 
this order (you might want to use file redirection for testing your code):
1. Student ID
2. First name
3. Last name
5. Score 1
6. Score 2
7. Score 3

> A negative ID indicates there are no more students.
> Do not accept more than 10 students.

Values of 0.0 to 100.0 are valid exam scores. If the user enters an invalid 
score, print an appropriate message and have them re-enter the score.

Once all data has been entered print a summary report (example below).

The grading scale for the class will be
* 89.5 for **A**
* 79.5 for **B**
* 69.5 for **C**
* 59.5 for **D**
* below 59.5 is **F**

**Do not use any global variables.**

### Table Specifications
* Display headers above each column of the table
* All columns in the results table should line up vertically.
* The results table should be sorted in descending order by exam average 
(highest average to lowest average)
* When displaying scores, always round to two decimal places.

All data should be entered by the instructor before any results are displayed.

The summary report should include
* Average on each of three exams
* Average on all exams
* GPA for the class
    * Calculate GPA by summing points earned by each student and dividing by
    the number of students.
    * Points are
        * ‘A’ = 4
        * ‘B’ = 3
        * ‘C’ = 2
        * ‘D’ = 1
        * ‘F’ = 0

## Suggestions
Compared to earlier projects, this project is rather long. It also involves 
some new concepts and difficult syntax. It will be critical that you start the 
project early.

It would be wise to subdivide this project into numerous functions. Remember, a 
function should have one clear purpose. Give very careful consideration to 
parameter passing. You must understand exactly how each piece of data is passed 
(ex. array, struct, array of structs). Remember that you must use prototypes 
for all functions except main. Include a comment before each function 
describing the purpose of the function.

You could store the information about the course in a struct.

## Data
`Project6/Run1.txt`
`Project6/Run2.txt`

## Results
`Project6/GradingOutput.txt`

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

## Sample Run
````
Enter student ID (negative to stop) --  11 
Enter first name --  Sue
Enter last name  --  Smith
Enter score for exam 1  --  77.7
Enter score for exam 2  --  88.8
Enter score for exam 3  --  99.9


Enter student ID (negative to stop) --  205 
Enter first name --  Sam
Enter last name  --  Stone
Enter score for exam 1  --  95
Enter score for exam 2  --  65
Enter score for exam 3  --  103
Invalid score - please redo --  72.22


Enter student ID (negative to stop) --  4
Enter first name -- Judy
Enter last name  -- Jones
Enter score for exam 1  --  97.889
Enter score for exam 2  --  96.888
Enter score for exam 3  --  95.499


Enter student ID (negative to stop) --  13
Enter first name -- Bill
Enter last name  -- Bond
Enter score for exam 1  --  55
Enter score for exam 2  --  -56
Invalid score - please redo --  56
Enter score for exam 3  --  57


Enter student ID (negative to stop) --  -1

 -------------------------------------------------------------------
   ID   Exam 1   Exam 2   Exam 3   Average  Grade  Name
 -------------------------------------------------------------------
    4    97.89    96.89    95.50     96.76    A    Jones, Judy
   11    77.70    88.80    99.90     88.80    B    Smith, Sue
  205    95.00    65.00    72.22     77.41    C    Stone, Sam
   13    55.00    56.00    57.00     56.00    F    Bond, Bill
 -------------------------------------------------------------------
    ---------------------------------------------
      C O U R S E   S U M M A R Y   R E P O R T
    ---------------------------------------------
             Exam 1 average     81.40
             Exam 2 average     76.67
             Exam 3 average     81.15
             Overall average    79.74
             Class GPA           2.25
    ---------------------------------------------
````

# Project 5

## Infix & Postfix

### Due
* March 6, before 5:00 PM
* March 7, before 5:00 PM (for late submissions)

### Objective
Write a C program that will use a Finite State Machine (FSM) to implement an
infix to postfix converter. You are strongly encouraged to use the algorithm
described in class.

### Specification
Operands will be represented by single, uppercase letters (A...Z). Operators 
will include `+`, `-`, `*`, `/`,and `%`.

Spaces may be included anywhere in the infix expression. They should **not**
be included in result expressions. The operands should appear *in the same
order* in the output as the input.

Your FSM should detect these errors:
* Illegal character (Accepts white space, parentheses, operands, or operators)
* Unmatched parentheses

The input expression will be eighty (80) characters or less.

You will be supplied ADTs that implement a `node`, a `stack`, and a `queue`. 
Studey carefully the interface to each, as they provide the basic functionality
for your algorithm.

You will be provide a *simple* [test program](ConverterTester.c). Notice that
it calls your converter. The test program passes a string containing the infix
expression which your converter converts and prints in postfix notation.

Note: Your `Converter.c` file may have many functions, but only one function
`runConverter` is required to implement the interface.

### Grading
[Converter Tester](ConverterTester2.c)
[Run Output](RunOutput.txt)

#### Files
* Node [header](filesADTs/Node.h) and [source](filesADTs/Node.c)
* Stack [header](filesADTs/Stack.h) and [source](filesADTs/Stack.c)
* Queue [header](filesADTs/Queue.h) and [source](filesADTs/Queue.c)
* Converter [header](Converter.h)

### Reminder
This is not a group project. You should not show anyone else your code and you
should not look at anyone else's code. Discuss ideas, not code. If you start
writing code down with someone else, you've gone too far.

### Style and Format
* Be sure to include appropriate documentation
* Format your code as discussed in previous classes

### Submission
* Submit your project using the eLearning dropbox
  * Notice there is a dropbox for late submissions
* Submit a `.zip` archive containing **only** your `Converter.c`
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_5.zip`)

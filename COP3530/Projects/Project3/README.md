# Project 3

## Linked List

### Due
* February 6, before 5:00 PM
* February 10, before 5:00 PM (for late submissions)

### Objective
Write a C implemetation of an ADT that represents a linked list. The basic
functionality the list provides is
  * `new`
  * `add`
  * `insert`
  * `remove`
  * `get`
  * `set`
  * `first`
  * `last`
  * `previous`
  * `next`
  * `isEmpty`
  * `size`
  * `free`

### Specification
Here is a [header file](LinkedList.h) that contains the definition for the
linked list. You must define the `struct LinkedList` in your `LinkedList.c`
file. For this project, you will define your `Node` in your `LinkedList.c`
file.

You **cannot** make *any* changes to the `LinkedList.h` file. Your 
`LinkedList.c` file may contain other utility functions not listed in the 
interface.

Remember to put a `#include "LinkedList.h"` statement in your `LinkedList.c`
file. You may implement your list as a *singly* or *doubly* linked list.

Here is a [sample driver](LinkedListText.c) that you can use. You may want to
use only a small portion of this file initially. You should add several tests
before submitting your project.

### Grading
* [Grader Test Program](LinkedListGrader.c)
* [Grader Output](GraderOutput.txt)

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
* Submit a `.zip` archive containing **only** your `LinkedList.c` file
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_3.zip`)

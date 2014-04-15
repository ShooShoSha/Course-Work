# Project 2

## ArrayList

### Due
* January 24, before 5:00 PM
* January 27, before 5:00 PM (for late submissions)

### Objective
Rewrite project 1 making a few minor modifications. Include the functions from
the first project and add three new ones. Here are the functions:
  * `new`
  * `add`
  * `get`
  * `set`
  * `remove`
  * `size`
  * `clear`
  * `capacity`
  * `contains` **<**
  * `clear` **<**
  * `free` **<**

Be sure you understand exactly how each function should work!

One more chage. Let's call this an `ArrayList` rather than a `vector`.

### Specification
Here is a file [ArrayList.h](ArrayList.h) that contains the definition for the 
`ArrayList`. Notice that the definition of `struct VectorT` is removed. That 
is an important change.

A new `typedef` is now included for a pointer to an `ArrayList` named 
`ArrayListP`. You must define the `struct ArrayList` in your `ArrayList.c` 
file.

You cannot make **any** changes to the `ArrayList.h` file.

Your `ArrayList.c` file may contain other utility functions not listed in the 
interface. Remember to put a `#include "ArrayList.h"` statement in your 
`ArrayList.c` file.

Here is a sample [test program](ArrayListTest.c) that you can use. You may want 
to use only a small portion of this file *initially*. You should add several
more tests before submitting your project.

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
* Submit a `.zip` archive containing **only** your `ArrayList.c` file
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_2.zip`)

### Suggestions
* Copy [Project 1](../Project1/README.md) and change the names from `Vector` to `ArrayList`
  * Use find/replace
  * Test functionality
* Move definition of the `struct` from the header (.h) file to the source (.c) file
  * Test it again
* Replace the array in the `struct` definition with a pointer
  * Use `malloc` to allocate the array
  * Test again
* Write a utility function that makes the array in the `Vector` *grow*
  * Test (yes) again
* Add the functions needed for [this project](README.md) that were not 
included in [Project 1](../Project1/README.md)
  * As always, test

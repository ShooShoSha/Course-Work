# Project 1

## ADTs and Malloc

### Due
* January 17, before 5:00 PM
* January 20, before 5:00 PM (for late submissions)

### Objective
Write a C Program that implements a data structure known as a vector (also 
known as an ArrayList in Java). A vector is an advanced array structure. It 
supports several operations including:
  * `new`
  * `add`
  * `get`
  * `set`
  * `remove`
  * `size`
  * `clear`
  * `capacity`

Be sure you understand exactly how each function should work!

In a perfect world, the vector would grow to any size necessary but for now we 
will not attempt that.

Notice that the basic premise is that this `vector` will be used in many 
future projects. The interface for the `vector` needs to be defined in a 
header (.h) file and the `vector` needs to be implemented in a source (.c) 
file (i.e. `Vector.h` and `Vector.c`).

The `vector` needs to be tested, so we will need a `main` driver program to 
use for testing the functionality of our `vector`

### Specification
Here is a file [Vector.h](Vector.h) that contains the definition for your 
`vector`. You must write a matching `Vector.c` file to implement this 
interface. Your `Vector.c` file may contain other utility functions not listed 
in the interface. Remember to put a `#include "Vector.h"` statement in your 
`Vector.c` file.

Here is a sample [test program](VectorTest.c) that you can use. You may want 
to use only a small portion of this file *initially*. Here is a 
[`make` file](makefile.txt) that you can use with this project. You will need 
it if you use jGrasp. **Be sure to remove the** `.txt` **extension from the 
file**.

### Grading
[`VectorTestGrader.c`](VectorTestGrader.c)

[`Output.txt`](Output.txt)

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
* Submit a `.zip` archive containing **only** your `Vector.c` file
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_1.zip`)

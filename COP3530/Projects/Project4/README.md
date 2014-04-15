# Project 4

## Sorting and Recursion

### Due
* February 21, before 5:00 PM
* February 24, before 5:00 PM (for late submissions)

### Objective
Write a C program that will sort a list of integerss using **two** (one fast
and one slow) of the following algorithms:
* *Slow*
  * Bubble
  * Selection
  * Insertion
* *Fast*
  * Merge
  * Quicksort
  * Binary Tree

You will use your sort algorithm to sort each of eight (8) lists. You will 
record the elapsed time for each of the lists.

### Operation
The user will indicate on the command line whether the sort should be *slow*
or *fast*. For example

	./a.out slow

Here is the procedure that your program should follow
  1. Open one file and read all of the integers into a dynamically allocated
array of the correct size and then close the file
  2. Start the timer
  3. Sort the integers into ascending order
    * Note: after the sort, the integers must be back into the original array
  4. Stop the timer and record the elapsed time
  5. For files `A.dat` and `E.dat`, write the sorted integers to an output text 
file
    * Note: write ten numbers per line in the output file in neat columns
  6. Free the memory used for the array
  7. Repeat from step 1 until all eight (8) files are sorted
  8. Display results in a table including
    * Filename
    * Count (of integers)
    * Elasped time (in milliseconds)

### Specification
The integers will be stored in eight (8) binary files
  * [A.dat](dataFiles/A.dat)
  * [B.dat](dataFiles/B.dat)
  * [C.dat](dataFiles/C.dat)
  * [D.dat](dataFiles/D.dat)
  * [E.dat](dataFiles/E.dat)
  * [F.dat](dataFiles/F.dat)
  * [G.dat](dataFiles/G.dat)
  * [H.dat](dataFiles/H.dat)

The first entry in each file will be an integer indicating how many data 
values are in the file. For example, if file A.dat contains twenty (20) 
integers for you to sort, it will actually contain twenty-one (21) integers
the first being the number twenty (20).

**Do not** include that first integer as part of the data to be sorted. If the
program fails to read from the file correctly, display an error message and
exit the program.

Each of the *fast* sorts **must** be implemented using recursion.

You *may* organize your source code any way you prefer (single or multiple 
files).

The integers to be sorted will be in the range **0...99999** inclusive.

### Grading

#### Algorithms
* [Merge](Merge.md)
* [Quicksort](Quicksort.md)

#### Files
* Binary files to start
  * 10 numbers
    * [d10.dat](d10.dat) - binary
    * [d10.txt](d10.txt) - text
  * 2000 numbers
    * [d2000.dat](d2000.dat) - binary
* Files for grading
  * Files A.dat ... H.dat
    * [dataFile.zip](dataFiles.zip)

#### Sample Output
**Merge**

Filename | N | Time (msecs)
--- | ---| ---
A.dat | 2000 | 1
B.dat | 10000 | 5
C.dat | 100000 | 66
D.dat | 1000000 | 696
E.dat | 2000 | 0
F.dat | 10000 | 4
G.dat | 100000 | 66
H.dat | 1000000 | 603


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
* Submit a `.zip` archive containing all files necessary to run your program
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_4.zip`)
  * If you have multiple source (.c) files, include a README indicating the 
command used to compile and build your program

# Project 6

## Tree

### Due
* April 4, before 5:00 PM
* April 7, before 5:00 PM (for late submissions)

### Objective
Write a C program that will implement an address book ADT.

### Specification
Your addresss book ADT must implement this [header](AddressBook.h) file.

You must implement your address book using a binary tree. You must maintain
entries in the tree in aplphabetcial order based on both last and first 
names (e.g. Al Smith would come before Joe Smith).

Each entry in the address book must include
* First name (max 40 characters)
* Last name (max 40 characters)
* Address (max 40 characters)
* Phone number (max 15 characters)
* Email (max 30 characters)

Notice that the address book ADT does not reveal the fact that it uses a 
tree data structure. Here is a [test file](AddressBookTest.c) to help you get
started.

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
  * Name your file argoID_project_#.zip (i.e. `kpo1_project_.zip`)
  * If you have multiple source (.c) files, include a README indicating the 
command used to compile and build your program
* **Do not submit a file containing a `main` function!**

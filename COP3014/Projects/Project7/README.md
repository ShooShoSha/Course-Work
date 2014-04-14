# Project 7
Files and Streams

## Due
* April 18, before 5 PM
* No late submissions

## Objective
Write a C program that employs files and streams to manipulate data.

## Specification
1. Open a text file that contains a list of words. Read each of the words from 
that file into an array of strings. You may assume the file will contain NO 
MORE THAN 100 words. You may assume no word is longer than 40 characters. We’ll 
refer to this as the search list.
2. Open a second text file, read one word and search for that word in the 
search list. If the word appears in the search list increment a counter so that 
you know how many times each search word appears in the second file.
3. Once all the words in the second file have been searched, write the results 
to a third text file.
4. You must pass the file names for all three files to the program using 
command line arguments. For example:
    * The filenames MUST appear in this order:
    * `./a.out  searchWords.txt  document.txt  results.txt`
5. You may use as many functions in this program as you like.
6. Be sure to error test that each file opens correctly and be sure to 
explicitly close each file.
    * If a file fails to open correctly, print an error message and exit the program
7. Be sure to error test that the user supplies the correct number of command 
line arguments.
    * Print an error message and exit if incorrect
8. Notice that for this project we will define a “word” as simply a string of 
characters delimited by white space
    * White space is one or more “spaces”, “tabs” or  “newlines”

 
## Data
`Project7/searchWords.txt`
`Project7/document.txt`
`Project7/outFile.txt`

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

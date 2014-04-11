# Introduction to UNIX

## History
* Created in the 1970s at Bell Laboratory
* Written in C
* Portable to many platforms
* Free distribution with source code

## Basics
* Multi-user system (time sharing) with remote access available
* Software the you should familiarize yourself:
	* telnet or SSH (puTTY)
	* FTP (FileZilla)
	* Xfree86 (remote GUI)
	* Graphical User Interface(GUI) and Command Line Interface (CLI)
* Linux is built on UNIX and is available for PCs in different "flavors" (distros)

## Shell
* A shell is a command interpreter that you access from the CLI
* Different distros of UNIX use different shells
* Commands are slightly different in different shells
* Some common shells:
	* sh (bourne)
	* csh (Sun/Berkeley)
	* ksh (Korn)
	* [bash](http://www.gnu.org/software/bash/manual/bashref.html)

## File System
The file system is hierarchical, "an arrangement of items... in which 
items are represented as being 'above', 'below', or 'at the same level as' one 
another" (Wikipedia, "Hierarchy").

* Terminology
	* directory - a folder containing files or directories
	* file - data that may represent documents, programs, etc.
	* program - file which is executable by the Operating System that reads or manipulates data or files. Also known as application; software
The "root" directory (or root of the tree) is referred by "/". The 
"root" user has absolute authority on all files in the file system (think of an
adminstrator).

There are special symbols that refer to different directories in the 
file system:

	/  	//root directory
	~  	//current user's home directory
	.  	//current directory
	.. 	//parent directory of the current directory (root does not have a parent; it is the parent of all directories)

Common shell commands for navigating a UNIX file system:

	cd 	//change directory
	ls 	//list files and directories in current directory
	pwd 	//shows path of the present working directory
	mkdir 	//make a new directory
	rmdir 	//remove a directory
	cp 	//copy a file or directory
	mv 	//move a file or directory (similar to cut and paste)
	rm 	//remove a file
	cat 	//display contents of a file
	more 	//display contents of a file
	man 	//show manual pages of commands

Many commands have additional options

	ls -al //Gives a long listing of all files

UNIX allows the use of something called a wildcard:

	rm *.java 	//Removes all files ending with .java
	rm pgm*.java 	//Removes all files starting with pgm and ending with .java
	
Some examples of commands
	cd /
	cd ~jlewis
	cd ..
	cd /usr/cs/jlewis/docs
	ls
	ls -al
	mkdir samples
	touch junk	//Creates a new, empty file
	cp junk samples
	cp /usr/cs/jlewis/docs/drafts .
	cd samples
	ls *.c
	rm junk.c
	ls *.c *.txt
	man ls		//Show manual page for ls command
	ps -ef		//Display status of all runnning processes
	
A path identifies a location in the file system. Paths are either 
absolute or relative. If a path starts at the root of the file system, it is 
abolute. If it starts from the present working directory, it is relative.

	/usr/cs/jlewis/docs	//Absolute
	samples/commands	//Relative
	
More commands:

	grep stuff file1
	tail -12 file1
	od -c file1
	tar -f archive.tar file1 file2 file3
	compress archive.tar

UNIX execution path is where the system looks for commands
If ou misspell a command, it will respond with "unknown command"
You can change where UNIX looks for commands by changing the path
The system maintains several environment variables to hold information

Try these commands:

	set
	env

Look for the PATH variable. You can change their values

	set PATH=:/usr/ucb :/bin :/usr/bin

File redirection is sending the output from a command to a file or 
getting input for a command from a file.

	ls > data
	cat data

A pipe is similar to rile redirection with a major difference: a pipe 
sends output from a command into another command's input, not a file.

	ls -al | more

## File and Directory Permissions
Since a UNIX machine is a multi-user, there needs to be a way to 
protect your portion of the file system. UNIX uses a system called permissions.
Every file has a set of permissions associated with it. Every file has an owner 
and a group. For each file, you decide what access the owner (user) has, what 
access the group has, and what access everyone else has. There are types of 
access: read, write, and execute. When you execute the "ls -al" command, you 
see permissions for each file like the following:

Type | Permissions           | Links | User    | Group   | Size | Modified Date | File
---- | ---- | ----- | ------ | ----- | ------- | ------- | ---- | ------------- | ----
d    | rwx  | r-x   | r-x    |  3    | kobrien | student | 4096 | Apr 10 08:23  | .
d    | rw-  | r--   | r--    |  3    | root    | root    | 4096 | Apr 10 08:17  | ..
d    | rw-  | r--   | r--    |  3    | kobrien | student | 4096 | Apr 10 08:30  | Samples
-    | rw-  | r--   | r--    |  1    | kobrien | student | 5052 | Apr 10 08:02  | Syllabus.txt

* Type
	* d indicates it is a directory, - is a normal file
* Permissions
	* r for read, w for write, x for execute, - lacks permission
* Links
	* Number of files or directories attached
* User
	* name of user who owns the file
* Group
	* name of group that owns the file
* Size
	* how large the file is
* Modified date
	* timestamp of when the file was last modified
* File
	* name of file or directory

To change the permissions on a file, use the chmod command. Assume we 
want to change the permissions on the Syllabus.txt file above. It has these 
permissions: rw- r-- r-- and we want to remove the read access from all others.
We use:

	chmod o-r Syllabus.txt

Now we want to add write permissions to the student group:

	chmod g+w Syllabus.txt
	
Permissions are given to **u** ser, **g** roup, and **o** thers. We can add
( **+** ) or remove ( **-** ) permissions.

We can also represent permissions in octal form. Look at r representing
the value 4, w the value 2, and x the value 1. If we want to give the 
permissions to read, write, and execute for the user we add the values for the 
permissions (read + write + execute or 4 + 2 + 1) and get the result 7. 
Similarly, we want the group to have read and execute permissions (read + write
or 4 + 1) results in 5. Finally, we want all others only the ability to read 
giving 4. We can then assign all these permissions with this form of the 
command:

	chmod 754 Syllabus.txt

The same permissions can be applied to directories (you will notice 
that directories are a special type of file):

	chmod 700 kobrien

There are a lot more commands and abilities UNIX is capable of 
executing. Unfortunately, covering more is beyond the scope of this class. It 
is encouraged you venture on your own to [learn more](http://www.ee.surrey.ac.uk/Teaching/Unix/unixintro.html)
of the system. The greatest quality of the UNIX/Linux world is its community 
of users and developers. Many questions have been asked and answered on 
various forums. Also the "man" command is a great place to start (though it 
takes adjusting to the documentation). Try the command:
	
	man man

for a list of the manual pages and how to use man itself!

## Developing C programs on a UNIX machine from the Command Line
The first step in writing a C program is to use a text editor to enter
and save the source code. Vi (or Vim) is a command line text editor available 
to all UNIX machines. It is worth knowing a few simple Vi commands so that you 
can quickly edit a text file.

When you have entered and saved the source code you need to compile, 
link, and run it. Historically, the C compiler on a UNIX machine was invoked 
with the "cc" command. Today, the most commonly available C compiler is the GNU
compiler and is invoked with the "gcc" command.

Suppose we saved some source code as "pgm1.c", you can compile it with
this command:

	gcc pgm1.c

If there are no errors (the compiler will let you know of language errors, 
logic errors are for you to find and fix), the compiler will create an 
executable named "a.out" by default.
If you set your PATH variable to the directory you are compiling your
code, then you could simply execute the program like this:

	a.out

Otherwise the shell might give you an error saying it cannot find the command.
You could add the directory to the PATH variable, or simply run the command in 
the current directory:

	./a.out

Remeber that's a relative path. You could refer to it in a way like this:

	/home/kobrien/samples/a.out

or if you are in different (like your home directory) you could do this:

	samples/a.out

Try using relative paths from your dirctories to execute that program. How many
ways can you get to run without being in the directory "a.out" is contained? 

If you want to add to the PATH variable, you need to add the value of the old 
variable and append the current directory:

	PATH=$PATH\:.

You are now ready to go to a UNIX machine, open a terminal, and get 
programming! Don't be afraid to experiment, failure teaches us more than 
success (but failure on grades is a waste of time). Have fun!

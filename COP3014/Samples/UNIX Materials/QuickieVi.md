# A Very Quick Intro to Vi

Open a terminal window on a UNIX machine. Navigate to the directory where you 
would like to save your file. Use the command:

	vi pgm1.c

You should now be running vi.

## Vi Modes

Perhaps the most important point to understand about Vi is that it has *modes*.
How do you (and Vi) know which mode you're in? When you type in Vi, sometimes 
you will be entering a **command** and sometimes you will **insert** text into 
your file.

When you open Vi, you will be in **command** mode. The cursor tells you where 
you are at in the file. Initially, the file is empty so the cursor is at the
beginning of the file.

> Notice that you will navigate the file using the arrow keys. There are other
ways, but we'll keep it simple). You may **NOT** navigate with your mouse.

To enter text into the file, type **i**. This tells Vi that you are going into
**insert** mode. Nothing visible will happen when you type **i**, but the next
letter you type will appear in the file. Continue typing as needed.

Now you have entered all the text you want. How do you get out of **insert**
mode? 

**When you are using VI, if you cannot remember which mode you are in, simply press the escape (Esc) key._**

If you were not already in **insert** mode, pressing escape does nothing. You
may flip between these modes as much as you need when typing in your file.

Now you finished typing and want to save. First, get out of **insert** mode.
Press escape to go into **command** mode. Enter a **:**. Notice that the colon 
appears at the bottom line of the Vi document. You can now type a command to 
write your file to disk. Notice that when we opened Vi we named this document
*pgm1.c*, so we do not need to use the name again.

In command mode, type

	:w

to save the file. Type

	:wq

to save the file and quit Vi. Type

	:q!

to exit Vi without saving the file.

Often we will pronounce the exclamation mark (!) as **bang**. In this context,
it is saying "just quit, I know what I'm doing!" After you exit Vi, do the 
command:

	ls

and look for your file. You can look at the contects of the file by doing

	cat pgm1.c

## Summary of Vi commands and Modes

### Navigation
Use arrow keys to navigate - **do not** use the mouse. In **command** mode, you
can use h, j, k, and l to move left, down, up, and right respectively.

Key | Direction
___ | _________
h | left
j | down
k | up
l | right

For longer programs, use the following commands to move several lines or pages
at a time.

	1G //Go to line 1
	5G //Go to line 5
	G //Go to last line
	Ctrl-F //move forward one window
	Ctrl-B //move backward one window
	Ctrl-U //move up half window
	Ctrl-D //move down half window

### Commands

	dd //delete current line (where the cursor is placed)
	p //paste (put) the line last copied or deleted (copies where the cursor is placed)
	yy //copy (yank) the current line to the clipboard
	D //delete from the cursor to the end of current line
	u //undo last command
	x //delete the chacter at the cursor
	i //enter insert mode (insert before the cursor)
 	a //enter insert mode (append after the cursor

> Some commands can be used with numbers

	5dd //delete 5 lines
	10x //delete 10 characters
	3yy //copy 3 lines to clipboard

> Exit **insert** mode and enter **command** mode by pressing Esc

### Saving the file
* Press Esc to enter **command** mode
* Enter :w

> When you type **:** the cursor moves to the last line of the terminal. Some
call this *bottom line mode*.

### Exiting Vi
* Press Esc to enter **command** mode
* Enter :q

### Force exit
* Press Esc to enter **command** mode
* Enter :q!

### Save and Quit in one command
* Press Esc to enter **command** mode
* Enter :wq

### Customization
In **command** mode use the set command to customize the window.

	:set number //shows line numbers
	:set nonumber //hides line numbers
	:set autoindent //inserts tabs at same level as last indent
	:set tabstop=4 //set number of characters tab moves
	:set smartindent //indent to appropriate level based on context
	:set showmatch //show matching parentheses and braces

### Resources
For more information on Vi, check out the PDF or go to this trimmed down site's
[documentation](http://www.emerson.emory.edu/services/editors/vi/vi.html)

# Project 2

## Due
* February 5, before 5PM
* February 7, before 5PM (for late submissions)

## Objective
Write a C program that displays an amortization table for a loan

Assume that you go to an electronics store and buy a new TV. The cost of the TV 
is $1000. The clerk asks if you would like to pay cash or use the stores handy 
payment plan. You have no cash so you obviously like the idea of a handy 
payment plan. The clerk indicates that the annual interest rate is only 18% and 
that you will only need to pay $50 per month, assuming you don’t make any down 
payment. You really like the idea of no down payment, so you agree to take the 
TV, no money down.

Your C program is now going to show you the details of the plan to which you have just agreed.

## Specification
The program starts by asking the user for four numbers
* selling price
* down payment
* annual interest rate
* payment size

Then a table similar the following is displayed.

Selling Price        = 1000.00
Down Payment         = 0.00
Annual Interest Rate = 1000.00
Monthly Payment      = 50.00

Pay # Old Balance Payment Interest To Balance New Balance
----- ----------- ------- -------- ---------- -----------
    1     1000.00   50.00    15.00      35.00      965.00
    2      965.00   50.00    14.48      35.52      929.48
...
   23       95.69   50.00     1.44      48.56       47.13
   24       47.13   47.84     0.71      47.13        0.00

Total of Payments =    1197.84
Total of interest =     197.84
Total to balance  =    1000.00

Notice that the user should enter the annual interest rate with a decimal point 
rather than a percent sign (%). For example, an annual rate of 18% would be 
entered as 0.18 and 7.5% would be entered as 0.075.

Display the results in neat columns. All dollar amounts should be rounded to 
the nearest cent. Be certain that you understand the difference between 
displaying a number as rounded to the nearest cent and actually rounding a 
calculation to the nearest cent.

Notice that the total of the payments should equal the interest plus the total 
applied to the balance. The final balance should be zero. The final payment may 
be less than the normal monthly payment.

## Warning
It is possible for the user to enter values such that the loan will never be 
paid. For example, a million dollar loan with a 50$ payment never ends (the 
interest would exceed the payments). Your program should stop as soon as such a 
case is detected and print an appropriate message.

## Data

`Project2/in1.txt`
`Project2/in2.txt`

## Results
`Project2/RunResults.txt`

## Style and Format
* Be sure to include appropriate documentation (header comments as described in 
Project 1)
* Format your code as discussed in class. For example, curly braces should line 
up and all blocks of code should be indented to appropriate level.

## Submission
* Submit your project using the eLearning dropbox.
* Notice that there is a dropbox for late submissions.
* For this project, simply submit the file containing your source code (.c)

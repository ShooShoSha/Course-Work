## QuickSort Alogorithm
### Recursive method
Assume an array containing the numbers to be sorted and a counter indicating
how many numbers are in the array.

Call the quickSort function. Pass the array and the count.

1. If count <= 1, return
2. Call partition function
	* Move small numbers to left and large number to the right
	* Return "pivot" point
3. Call quickSort function passing the subArray on left with 
appropriate count
4. Call quickSort function passing the subArray on right with
appropriate count
	* Note: Here you are actually passing a portion of the array

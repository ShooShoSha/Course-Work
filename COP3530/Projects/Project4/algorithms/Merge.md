## Merge Sort Algorithm
### Recursive Method
Assume an array containing the numbers to be sorted and a counter indicating
how many numbers are in the array.

Call the mergeSort function. Pass the array and the count.
	1. If count <= 1, return
	2. Create dynamic subArray and copy first half numbers into it
	3. Create second dynmaic subArray and copy second half of numbers in it
	4. Call mergeSort with first subArray and appropriate count
	5. Call mergeSort with second subArray and appropriate count
	6. Merge the two subArrays back into the original array.
	7. Free both subArrays

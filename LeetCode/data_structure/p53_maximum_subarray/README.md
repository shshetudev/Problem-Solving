# Approach-1: Divide and Conquer
## Divide and Conquer Algorithm
* It is a strategy of solving a large problem by:
  * Breaking the problem into sub-problems.
  * Solving the sub-problems.
  * Combining them to get the desired output.
* To use the divide and conquer algorithm, recursion is used.

## How divide and conquer algorithms work:
1. __Divide:__ Divide the given problem into sub-problems using recursion.
2. __Conquer:__ Solve the smaller sub problems recursively. If the subproblem is small enough then solve it directly.
3. __Combine:__ Combine the solutions of the sub-problems that are part of the recursive process to solve the actual problem.
* For example: Sorting an array using divide and conquer approach(Merge sort). 
* Converting [7,6,1,5,4,3] to [1,3,4,5,6,7]

## Three cases to cover all the possibilities to find maximum sub array
- Case 1: Max subarray lies completely in the left half of the array.
- Case 2: Max subarray lies completely in the right half of the array.
- Case 3: Partial portion of max subarray lies in the left half and another partial portion of it lies in the second half.

## Explaining the cases
- As we can see case-1 and case-2 is basically a subproblem of N/2 sized array having same definition as main problem. Where N is the size of the current array. So we can simply recurs the function over two halves of the array.
- The main part is case 3 which we have to solve in the current function and then we can return the maximum sum out of these 3 cases.

## Algorithm to solve
- Divide the array into two halves.
- Recursively find the maximum subarray sum for the left subarray.
- Recursively find the maximum subarray for the right subarray.
- Find the maximum subarray sum that crosses the midpoint.
- Return the maximum of above three sums.
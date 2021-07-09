### Problem Statement
* Given any array of integers where __each element represents the max number of steps that can be made forward from the element__.
* We have to write a function to __return the minimum number of jumps to reach the end of the array(starting from the first element).__

### I/O
* __Sample1:__
    Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
    Output: 3 (1-> 3 -> 8 -> 9)
* ___Sample2:__
    Input:  arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    Output: 10

    ### Method 1: Naive Recursive approach
    * A naive approach is to __start from the first element and recursively call for all the elements reachable from the first element__.
    * __The minimum number of jumps to reach end from first can be calculated using minimum number of jumps needed to reach end from the elements reachable from first__.
    __minJumps(start,end) = Min (minJumps(k,end)) for all k reachable from start__ 

    * __Complexity Analysis:__
      * __Time complextiy:__ O(n^n)
      * __Auxiliary space:__ O(1)
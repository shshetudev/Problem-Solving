# Problem: Two Sum

## Problem Definition
### Statement
- Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.
- You may assume that each input would have exactly one solution, and you may not use the same element twice.
- You can return the answer in any order.

### I/O
- **Example-1**
    ```
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
    ```
- **Example-2**
    ```
    Input: nums = [3,2,4], target = 6
    Output: [1,2]
    ```
- **Example-3**
    ```
    Input: nums = [3,3], target = 6
    Output: [0,1]
    ```

### Constraints
- `2 <= nums.length <= 104`
- `109 <= nums[i] <= 109`
- `109 <= target <= 109`
- **Only one valid answer exists.**

### Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?


## Discussion
- We can solve this problem in this ways:
  - **Naive approach:** using nested for loop -> T.C: O(n^2), S.C: O(1)
  - **Best approach:** using hashmap/hashtable -> T.C.: O(n), S.C: O(1)


## Solution

### Naive approach: Using Nested for loop
- **Time complexity: O(n^2), Space complexity: O(1)**
- Using two loops for traversing through each element, add two elements and matching.
- [Solution in java](../P1_Two_Sum/java/data_structure/array/P1_Two_Sum/java/NaiveSolution.java)
- [Solution in python](../P1_Two_Sum/python/NaiveSolution.py)

### Best approach: Using Hashmap or Hashtable
- ![Using Hashmap](../../images/p1_two_number_sum.png)
- **Time complexity: O(n) where n is the length of the array.**
- **Space complexity: O(n) as the numbers will be inserted.**
- We suppose an array: `[3, 5, -4, 8, 11, 1, -1, 6]` and `target=10`.
- We traverse the array and store each of these element in hashtable/hashmap.
- Now We once again traverse each element of the array.
- It needs addition of two number say `x` and `y` to get the desired `target`.
- If we consider each element of the array as `x` and , then formula becomes: `x+y=target`.
- Using this formuala `y=target-x` we can find other number `y`. 
- [Solution in java](../P1_Two_Sum/java/data_structure/array/P1_Two_Sum/java/NaiveSolution.java)
- [Solution in python](../P1_Two_Sum/python/NaiveSolution.py)

### Better Approach: 
- **Time complexity: O(nlogn) where n is the length of the array.**
- **Space complexity: O(1) as the numbers will be inserted.**
- ![Sorting the array and adding two pointers](../../images/p1_two_number_sum_better-1.png)
- We sort the array. So now we have sorted array. Where the time complexity is: `O(nlognn)`.
- We put a left pointer L in the first number of the array.
- We put a right pointer R in the last number of the array.
- Then we can sum up these two numbers: `sum=L+R`.
- After that we can compare the `sum` with the `target` we want to find.
- If the `sum < target`, then we move the left pointer 1 place to the right. So it becomes `L=L+1`.
- And once again we add the `L` with existing `R` and find the `sum=L+R`.
- ![Sorting the array and adding two pointers](../../images/p1_two_number_sum_better-2.png)
- So if `sum == target` then we return `[L,R]`.
- But if `sum > target` we move the right pointer `R=R-1` and find `sum=L+R`. 
- Same process continues untill we find `sum=target`.
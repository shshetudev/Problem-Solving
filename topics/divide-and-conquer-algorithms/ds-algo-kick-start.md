# Divide and Conquer Algorithm
- A divide and conquer algorithm is a strategy of solving a large problem by:
  - **Divide**: Breaking the problem into smaller sub-problems.
  - **Conquer**: Solving the sub-problems.
  - **Combine**: Combining them to get teh desired output.
- To use the divide and conquer algorithm, recursion is used.

 ## Advantage of Divide and Conquer Algorithm
 - The complexity of multiplying two matrices reduce from O(n^3) to O(n^2.8).
 - This approach also simplifies other problems, such as Tower of Hanoi.
 - This approach is suitable for multiprocessing systems.
 - It makes efficient use of memory caches.
  
 ## Divide and Conquer Applications
 - Binary search
 - Merge sort
 - Quick sort
 - Karatsuba mulitplication
 - Stassens's matrix multiplication

 ## Time complexity
 - The complexity of the divide and conquer algoritm is calculated using the master theorem.
  ```
    T(n) = aT(n/b) + f(n),
    where,
    n = size of input
    a = number of subproblems in the recursion
    n/b = size of each subproblem. All subproblems are assumed to have the same size.
    f(n) = cost of the work done outside the recursive call, which includes the cost of dividing the problem and cost of merging the solutions
  ```
- For a merge sort, the equation can be written as:
  ```
    T(n) = aT(n/b) + f(n)= 2T(n/2) + O(n)
    Where, 
    a = 2 (each time, a problem is divided into 2 subproblems)
    n/b = n/2 (size of each sub problem is half of the input)
    f(n) = time taken to divide the problem and merging the subproblems
    T(n/2) = O(n log n) (To understand this, please refer to the master theorem.)

    Now, T(n) = 2T(n log n) + O(n)
            ≈ O(n log n)
  ```

  ## Binary Search
  - BS is a searching algorithm for **finding an element's position in a sorted array**.
  - In this approach **the element is always searched in the middle of a portion of an array**.
  - Binary search algorithm can be implemented in two ways:
    - Iterative Method.
    - Recursive Method.
  - Solution steps:
    - Given an initial array = [3,4,5,6,7,8,9]. Let `x=4` be the element to be searched.
    ![Initial Array](../images/bs_1.png)
    - We set two pointers low and high at the lowest and the highest positions respectively.
    ![Setting pointer](../images/bs_2.png) 
    - We find the middle element `mid` of the array ie `arr[(low+high)/2]=6`.
    ![Setting pointer](../images/bs_3.png)
    - If `x==mid`, then return mid.Else, compare the element to be searched with m.
    ![Setting pointer](../images/bs_4.png)  
    - If `x>mid`, compare `x` with the middle element of the elements on the right side of `mid`. This is done by setting `low` to `low=mid+1`.
    ![Setting pointer](../images/bs_5.png)
    - Else compare `x` with the middle element of the elements on the left side of `mid`. This is done by setting `high` to `high=mid-1`  
    ![Setting pointer](../images/bs_6.png)  
    - We have to repeat steps 3 to 6 until low meets high.<br>
    ![Setting pointer](../images/bs_7.png)  
    - `x=4` if found.<br>
    ![Setting pointer](../images/bs_8.png)  

    ## Iterative approach
    ```
    do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1
    ```

    ## Binary approach
    ```
    binarySearch(arr, x, low, high)
    if low > high
        return False 
    else
        mid = (low + high) / 2 
        if x == arr[mid]
            return mid
        else if x > arr[mid]        // x is on the right side
            return binarySearch(arr, x, mid + 1, high)
        else                               // x is on the right side
            return binarySearch(arr, x, low, mid - 1)
    ```
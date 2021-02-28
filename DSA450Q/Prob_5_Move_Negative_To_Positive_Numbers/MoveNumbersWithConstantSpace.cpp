#include <bits/stdc++.h>
using namespace std;
// Using Quick Sort
void rearrange(int arr[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] < 0) {
            if(i != j)
                swap(arr[i],arr[j]);
            j++;
        }
}

// Using two pointer approach
void shiftAll(int arr[], int left, int right) {
    // Loop to iterate over the array from left to the right
    while (left <= right)
    {
        // Condition to check if the left and the right elements are negative
        if(arr[left] < 0 && arr[right] < 0) left++;
        
        // Condition to check if the left pointer element is positive and the right pointer element is negative
        if(arr[left] > 0 && arr[right] < 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }

        // Condition to check if both the elements are positive
        else if (arr[left]>0 && arr[right]>0) right--;
        else {
            left++;
            right--;
        }
    }
    
}

void printArray(int arr[], int n) {
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // rearrange(arr, n);
    shiftAll(arr,0,n-1);
    printArray(arr, n);
    return 0;
}
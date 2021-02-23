// C++ program to rotate an array by d elements
#include <bits/stdc++.h>
using namespace std;

// Function to left Rotate
void leftRotateByOne(int arr[], int n) {
    // Add first element of the array in a temp variable
    int temp = arr[0], i;
    // re initialize the array upto: n-2 elements
    // initialize the (i+1)th element into : ith position in the array 
    for ( i = 0; i < n-1; i++)
        arr[i] = arr[i+1];
    // Store the temp variable element into the (n-1)th position of the array
    arr[n-1] = temp;
}

// Function to left rotate arr[] of size n by d
void leftRotate(int arr[], int d, int n) {
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }
    
}

// Utility function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

// Driver program to test above functions
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling 
    leftRotate(arr, 2, n);
    printArray(arr, n);
    return 0;
}
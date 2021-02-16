// C++ program to rotate an array by d elements
#include <bits/stdc++.h>
using namespace std;

// Function to left Rotate
void leftRotateByOne(int arr[], int n) {
    int temp = arr[0], i;
    for ( i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}

// Function to left rotate arr[] of size n by d
void leftRotate(int arr[], int d, int n) {
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }
    
}
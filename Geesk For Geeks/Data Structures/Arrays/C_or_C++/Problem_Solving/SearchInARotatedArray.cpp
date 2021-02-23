#include <bits/stdc++.h>
using namespace std;

// Function: Standard Binary Search function
int binarySearch(int arr[], int low, int high, int key) {
if (high < low) return -1;
int mid = (low + high) / 2;
if (key == arr[mid]) return mid;
if (key > arr[mid]) return binarySearch(arr, (mid+1), high, key);
return binarySearch(arr, low, mid-1, key);
}

// Function: Get Pivot from Array
int findPivot(int arr[], int low, int high) {
    // base cases
    if (high < low) return -1;
    if (high == low) return low;
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid+1]) return mid;
    if (mid > low && arr[mid] < arr[mid-1]) return (mid-1);
    if (arr[low] >= arr[mid]) return findPivot(arr,low,mid-1);
    return findPivot(arr, mid+1, high);
}

// Function: Search an element key in a pivoted sorted array
int pivotedBinarySearch(int arr[], int n, int key) {
    int pivot = findPivot(arr, 0, n-1);
    // If we did not find a pivot, the array is not rotated at all
    if (pivot == -1) return binarySearch(arr, 0, n-1, key);
    if (arr[pivot] == key) return pivot;
    if (arr[0] <= key) return binarySearch(arr,0,pivot-1,key);
    return binarySearch(arr,pivot+1,n-1,key);
}

// Driver program
int main() {
    int t, n, key;
    cin >> t;
    while(t-- > 0) {
     cin >> n;
     cin >> key;
    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    cout << pivotedBinarySearch(arr,n, key);
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Recursive binary search function. It returns location of x otherwise -1
// l = left, r = right, x = key to search
int binarySearch(int arr[], int l, int r, int x) {
   if(r >= l) {
    int mid = l + (r-1)/2; 
   // If the element is present at the middle itself
   if(arr[mid] == x) return mid;
   // If the element is smaller than mid, then it can only be present in left subarray
   if(arr[mid] > x) return binarySearch(arr, l, mid-l, x);
   } 
}
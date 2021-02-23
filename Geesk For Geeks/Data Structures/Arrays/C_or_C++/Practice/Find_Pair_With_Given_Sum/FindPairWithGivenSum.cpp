#include <iostream>
using namespace std;

// This function returns true if arr[0..n-1] has a pair with sum equals to x.
bool pairInSortedRotated(int arr[], int n, int x) {
    // Find the pivot element
    int i;
    for (i = 0; i < n-1; i++)
        if(arr[i] > arr[i+1]) 
            break;
    int l = (i+1)%n; // l is now index of smallest element
    int h = i; // h is now index of largest element

    // Keep moving either l or h till they meet
    while (l != h) {
    // If we find a pair with sum x, we return true
    if (arr[l] + arr[h] == x) return true;
    // If current pair sum is less, move to the higher sum
    if (arr[l] + arr[h] < x) l = (l+1)%n;
    // Move to the lower sum side
    else h = (n + h - l) % n;
    }
    return false;
}

// Driver function
int main() {
    int arr[] = {11, 15, 6, 8, 9, 10};
    int sum = 16;
    int n = sizeof(arr)/sizeof(arr[0]);
    if (pairInSortedRotated(arr, n, sum)) cout << "Array has two elements with sum " << sum;
    else cout << "Array doesn't have two elements with sum " << n;
    return 0;
}
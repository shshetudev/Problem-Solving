#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int arrSize) {
    int lo = 0;
    int hi = arrSize -1;
    int mid = 0;

    // Iterate till all the elements are sorted
    while (mid <= hi) {
        switch (arr[mid])
        {
        case 0:
           swap(arr[lo++],arr[mid++]);
            break;
        
        case 1:
           mid++;
            break;

         case 2:
           swap(arr[mid],arr[hi--]);
            break;
        }
    }
}

void printReversedArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";
    
}
    
// Driver Code
int main() {
        int arr[] = {0,1,1,0,1,2,1,2,0,0,0,1};
        int n = sizeof(arr) / sizeof(arr[0]);
        sort012(arr,n);
        cout << "Array after segregation ";
        printReversedArray(arr,n);
        return 0;
    }
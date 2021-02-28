#include <bits/stdc++.h>
using namespace std;
void moveNegative(int arr[], int left, int right) {
    while(left <= right) {
        if(arr[left] > 0 && arr[right] > 0) 
            right--;
        else if(arr[left] < 0 && arr[right] > 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        } 
        else if (arr[left] < 0 && arr[right] < 0 ) 
            right --;
        else {
            right--;
            left++;
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
    moveNegative(arr,0,n-1);
    printArray(arr, n);
    return 0;
}
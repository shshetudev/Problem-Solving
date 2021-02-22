#include <iostream>
using namespace std;

void rotateArray(int arr[], int n) {
    // Store the last element in the temp variable
    int temp = arr[n-1];
    // Store (i-1)th element in ith position
    // Decremental loop
    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    // Store temp vaiable value in the last position 
    arr[0] = temp;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateArray(arr, n);
    printArray(arr,n);
    return 0;
}
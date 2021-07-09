#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    if(n==1)
        return 0;
    sort(arr, arr+n);
    // arr = {1,10,15}, k = 6
    // Initialize result
    int ans = arr[n-1] - arr[0]; // 15 - 1
    //Handle corner elements
    int small = arr[0] + k; // 1 + 6 = 7
    int big = arr[n-1] - k; // 15 - 6 = 9
    if(small > big)
        swap(small,big);
    // Traverse middle elements
    for(int i=1;i<n-1;i++){
        int subtract = arr[i] - k; // 10-6 = 4
        int add = arr[i] + k; // 10+6 = 16
        // If both subtraction and addition do not change difference
        if(subtract>=small || add <= big)
            continue;
        // Either subtraction causes a smaller number or addition causes a greater number
        // Update small or big using greedy approach
        if(big-subtract <= add-small) // 9-4=5 <= 16-7=9
            small = subtract; // 4
        else
            big = add;
        return min(ans, big-small);
    }
        
}

int main() {
    int arr[] = {1,15,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    cout << getMinDiff(arr,n,k);
    return 0;
}
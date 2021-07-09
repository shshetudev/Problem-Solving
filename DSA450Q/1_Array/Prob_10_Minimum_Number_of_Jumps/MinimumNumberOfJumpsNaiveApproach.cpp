#include<bits/stdc++.h>
using namespace std;

// Function to return the minimum number of jumps
// to reach arr[h] from arr[l]
int minJumps(int arr[], int n) {
    // Base case: When source and destination are same
    if(n==1)
        return 0;
    // Traverse through all the points reachable from arr[]
    // Recursively, get the minimum number of jumps needed to 
    // reach arr[h] from these reachable points
    int res = INT_MAX;
    for(int i=n-2;i>0;i--)
        if(i+arr[i] >= n-1) {
            int sub_res = minJumps(arr,i+1);
            
        }
}
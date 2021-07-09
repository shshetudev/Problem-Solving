#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        int local_max = 0;
        int global_max = INT_MIN;
        for(int i=0;i<n;i++) {
            local_max = max(arr[i],arr[i]+local_max);
            if(local_max > global_max)
                global_max = local_max;
        }
        return global_max;
        
    }
};

int main() {
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout << ob.maxSubarraySum(a,n) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int sumOfMinAbsDifferences(int arr[], int n) {
            sort (arr,arr+n);
            int sum = abs(arr[0] - arr[1]);
            sum += abs(arr[n-1] - arr[n-2]);
            for (int i = 1; i < n-1; i++)
                sum += min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
            return sum;
        }
};

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.sumOfMinAbsDifferences(arr,n) << endl;
        
    }
}
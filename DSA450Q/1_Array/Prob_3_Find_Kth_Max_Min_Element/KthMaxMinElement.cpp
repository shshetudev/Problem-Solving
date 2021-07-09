#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int numberOfElements;
        cin >> numberOfElements;
        int arr[numberOfElements];

        for (int i = 0; i < numberOfElements; i++)
            cin >> arr[i];
        int k;
        cin >> k;
        cout << kthSmallest(arr, 0, numberOfElements-1, k) << endl;
        
    }
    
    return 0;
}

int kthSmallest(int arr[], int l, int h, int k) {
    sort(arr,arr+h+1);
    return arr[k-1];
}
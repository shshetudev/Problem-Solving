#include <bits/stdc++.h>
using namespace std;

void printUnion(int arr1[], int arr2[], int m, int n) {
set<int> hs;

// Insert the elements of arr1[] to set hs
for(int i=0; i<m; i++)
    hs.insert(arr1[i]);
// Insert the elements of arr2[] to set hs
for(int j=0; j<n;j++)
    hs.insert(arr2[j]);

// Print the content of set hs
for(auto it = hs.begin(); it != hs.end(); it++)
    cout << *it << " ";
cout << endl;
}

// Prints intersection of array
void printIntersection(int arr1[], int arr2[], int m, int n){
    set<int> hs;

    // Insert the elements of arr1[] to set S
    for(int i=0;i<m;i++)
        hs.insert(arr1[i]);
    // Insert the elements of arr2[]
    for(int j=0;j<n;j++)
        if(hs.find(arr2[j]) != hs.end())
            cout << arr2[j] << " ";
}

// Driver Program
int main() {
    int arr1[] = {7,1,5,2,3,6};
    int arr2[] = {3,8,6,20,7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1,arr2,m,n);
    printIntersection(arr1,arr2,m,n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n;i++) cout << arr[i] << " "; 
}

void movePositiveNegativeNumbers(int arr[], int n){
    vector<int> vector;
    for(int i=0;i<n;i++)
        if(arr[i]<0)
            vector.push_back(arr[i]);
            
            
    
    for(int i=0;i<n;i++)
        if(arr[i]>0)
            vector.push_back(arr[i]);
        
    for(int i: vector) cout << i <<" ";

}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    movePositiveNegativeNumbers(arr,n);
    return 0;
}
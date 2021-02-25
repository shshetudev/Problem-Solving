#include <iostream>
using namespace std;

int main(){
    int r = 3, c = 2;
    int arr[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
            cout << "(" << i << ", " 
            << j << ") = " << arr[i][j] << endl;
        }          
    return 0;
}
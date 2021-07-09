#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int tempArr[n];
    for (int i = 0; i < n; i++)
        tempArr[i] = arr[(n - 1) - i];
    for (int num : tempArr)
        cout << num << " ";
    return 0;
}
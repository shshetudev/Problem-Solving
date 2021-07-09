#include <iostream>
using namespace std;

void reverseByReversePrinting(string s) {
    for(int i = s.length() - 1; i >= 0; i--)
        cout << s[i];
}

string reverseBySwapMethod(string s) {
int n = s.length();
int start = 0;
int end = n-1;
while (start < end)
{
   // Swap
   int temp = s[start];
   s[start] = s[end];
   s[end] = temp;
   start++;
   end--;
}
return s;
}

int main(){
    string s;
    cin >> s;
    // reverseByReversePrinting(s);
    cout << reverseBySwapMethod(s);
    return 0;
}
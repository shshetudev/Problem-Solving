#include <iostream>
using namespace std;
class Solution {
public:
 int middle(int A, int B, int C){
     int middle = 0;
     if((A>B && A<C) || (A>C && A<B)) middle = A;
     else if((B>A && B<C) || (B>C && B<A)) middle = B;
     else if((C>A && C<B) || (C>B && C<A)) middle = C;
     return middle;
 }
};

int main() {
    int t;
    cin >> t;
    while (t--)
    {
       int A,B,C;
       cin>>A>>B>>C;
       Solution solObj;
       cout<<solObj.middle(A,B,C)<<"\n";
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> myvector{1,2,3,4};
    vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(6);
    myvector.push_back(5);
    myvector.push_back(4);
    // for (auto it = myvector.begin(); it != myvector.end(); ++it)
    //     cout << ' ' << *it;

    // sort the vector

    // for each loop
    for (auto x: myvector) cout << x << " ";
    return 0;
}
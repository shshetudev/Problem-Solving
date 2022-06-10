#include<iostream>
#include<vector>
#include<map>
using namespace std;

void containsDuplicate(vector<int>& nums) {
    map<int, int> numsContainer;
    for(auto & num: nums) {
        if(numsContainer.find(num) == numsContainer.end()) {
            cout << "true";
            return;
        }
        numsContainer.insert(pair<int, int> (num, 1));
    }
    cout << "\n";
    cout << "false";
    return;
}

int main() {
    cout << "Hello World from Duplicate Finder!";
    vector<int> nums{1,2,3,1};
    containsDuplicate(nums);
    return 0;
}
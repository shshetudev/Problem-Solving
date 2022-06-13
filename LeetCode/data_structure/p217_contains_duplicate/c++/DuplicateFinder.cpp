#include<iostream>
#include<vector>
#include<map>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    map<int, int> numsContainer;
    for(auto & num: nums) {
        if(numsContainer.find(num)->second) {
            return true;
        }
        numsContainer.insert(pair<int, int> (num, 1));
    }
    return false;
}

int main() {
    vector<int> nums{1,2,3,1};
    cout << containsDuplicate(nums);
    return 0;
}
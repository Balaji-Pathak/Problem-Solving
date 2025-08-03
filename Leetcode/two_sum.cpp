#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {      
    map<int, int> freq;
    for(int i=0; i<=nums.size()-1; i++){
        int diff = target - nums[i];
        if(freq.count(diff) && freq[diff]!=i ){
            return{freq[diff],i };
        } 
        freq[nums[i]]=i;
        
    }return{-1, -1};
        }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}
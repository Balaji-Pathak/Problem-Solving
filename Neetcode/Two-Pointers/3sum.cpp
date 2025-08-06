#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int s=i+1;
            int e= nums.size()-1;
            while(s<e){
                int sum = nums[i]+nums[s]+nums[e];
                if(sum==0) {
                    ans.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1]) s++;
                    while(s<e && nums[e]==nums[e-1]) e--;
                    s++;
                    e--;
                }
                 else if(sum<0){
                    s++;
                }else{
                e--;
            }
        }
    }
        return ans;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);
    
    for (const auto& triplet : result) {
        cout << "[";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    
    return 0;
}

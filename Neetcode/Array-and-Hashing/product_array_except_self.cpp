#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int postfix = 1;
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            ans[i]=prefix;
            prefix*=nums[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            ans[i]*=postfix;
            postfix*=nums[i];
        }
        return ans;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);
    
    cout << "Product Array Except Self: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int n  = nums.size();
        vector< vector< int> > bucket(n+1);
        for(auto num : nums){
            map[num]++;
        }
        for(auto ma : map){
            int key = ma.first;
            int value = ma.second;
            bucket[value].push_back(key);
        }
        vector <int> result;
        for (int j = bucket.size() - 1; j >= 0 && result.size() < k; j--) {
    for (int num : bucket[j]) {
        result.push_back(num);
        if (result.size() == k) break;
    }
}

        return result;

    
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = sol.topKFrequent(nums, k);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
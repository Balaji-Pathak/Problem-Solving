#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<vector<int> > bucket(nums.size()+1);
        for(auto num : nums){
            map[num]++;
        }
        for(auto map1: map){
            bucket[map1.second].push_back( map1.first) ;
        }
        vector<int> answer;
        for (int i = bucket.size() - 1; i >= 0; i--) {
            for (int num : bucket[i]) {
                answer.push_back(num);
                if (answer.size() == k) return answer;
            }
        }
        return answer;
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
// 128. Longest Consecutive Sequence
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;
        for(int num : numSet) {
            if (!numSet.count(num-1)) { 
                int currentNum = num;
                int currentLength = 1;
                while (numSet.count(currentNum + 1)) {
                    currentNum++;
                    currentLength++;
                }
                maxLength = max(maxLength, currentLength);
            }
        }
        return maxLength;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = sol.longestConsecutive(nums);
    
    cout << "Longest Consecutive Sequence Length: " << result << endl;

    return 0;
}

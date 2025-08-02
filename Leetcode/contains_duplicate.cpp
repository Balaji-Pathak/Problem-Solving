//217. Contains Duplicate
#include <bits/stdc++.h>
using namespace std;

// using maping with storing frequnecy
class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        map<int, int> freq;
        for (auto num : nums)
        {
            freq[num]++;
            if (freq[num] > 1)
                return true;
        }
        return false;
    }
};
// using set
// class Solution
// {
// public:
//     bool hasDuplicate(vector<int> &nums)
//     {
//         unordered_set<int> set;
//         for (int num : nums)
//         {
//             if (set.count(num))
//                 return true;
//             set.insert(num);
//         }
//         return false;
//     }
// };




// 219. Contains Duplicate II

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (map.count(num) && i - map[num] <= k) {
                return true;
            }
            map[num] = i;
        }
        return false;

    }
};






int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    bool result = sol.hasDuplicate(nums);
    cout << (result ? "Contains duplicate" : "No duplicates") << endl;
    return 0;
}
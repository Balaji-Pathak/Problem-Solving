// using maping with storing frequnecy
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> freq;
        for(auto num: nums){
            freq[num]++;
            if(freq[num]>1) return true;
        }return false;
    }
};
// using set 
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int num:nums){
            if(set.count(num))return true;
            set.insert(num);
        }
        return false;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s =1;
        int e = numbers.size();
        while(s<e){
            int sum = numbers[s-1]+numbers[e-1];
            if(sum == target) return {s,e};
            if(sum<target){
                s++;
            }else{
                e--;
            }
        }

    }
};

int main(){
    Solution sol;
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> result = sol.twoSum(numbers, target);
    cout << result[0] << " " << result[1] << endl; // Output: 1 2
}

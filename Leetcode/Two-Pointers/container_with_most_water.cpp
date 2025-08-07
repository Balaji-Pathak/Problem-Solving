#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e = height.size()-1;
        int maxWater = 0;
        while(s<e){
            int water = (e-s)* min(height[s],height[e]);
            maxWater = max(maxWater, water);
            if(height[s]<height[e]){
                s++;
            }
           else{
            e--;

            }

        }
        return maxWater;
    }
};

int main() {
    Solution sol;
    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    cout << "Maximum area of water container: " << sol.maxArea(heights) << endl;
    return 0;
}
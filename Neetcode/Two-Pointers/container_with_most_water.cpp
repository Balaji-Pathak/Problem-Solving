#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s =0;
        int e = heights.size()-1;
        int max1 = 0;
        while(s<e){
            int water = (e-s)* min(heights[s], heights[e]);
            max1 = max(max1, water);
            if (heights[s] < heights[e]) {
                s++;
            } else {
                e--;
            }
        }
        return max1;
    }
};

int main() {
    Solution sol;
    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    cout << "Maximum area of water container: " << sol.maxArea(heights) << endl;
    return 0;
}
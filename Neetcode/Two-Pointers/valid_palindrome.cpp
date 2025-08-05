#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.length() - 1;
        while (st < e) {
            if (!isalnum(s[st])) {
                st++;
                continue;
            }
            if (!isalnum(s[e])) {
                e--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[e])) {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
};


int main(){
    Solution sol;
    string text = "balaji student";
    cout << sol.isPalindrome(text) << endl;
}
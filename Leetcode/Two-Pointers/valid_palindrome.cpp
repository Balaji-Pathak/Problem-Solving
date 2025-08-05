#include <cctype>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i =0;
        int j =n-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};


//  string filtered = "";
//         for (char c : s) {
//             if (isalnum(c)) {
//                 filtered += tolower(c);
//             }
//         }
//         int left = 0, right = filtered.size() - 1;
//         while (left < right) {
//             if (filtered[left] != filtered[right]) {
//                 return false;
//             }
//             left++;
//             right--;
//         }
//         return true;


int main(){
    Solution sol;
    string text = "baab";
    cout << sol.isPalindrome(text) << endl;
}
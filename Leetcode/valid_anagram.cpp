#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char, int> s1;
       unordered_map<char, int> t1;
       for(char c: s){
        s1[c]++;
       }
       for(char c: t){
        t1[c]++;
       }
       if(s1==t1) return true;
       return false;


    }
};

int main() {
    Solution sol;
    string s = "anagram";
    string t = "nagaram";
    bool result = sol.isAnagram(s, t);
    cout << (result ? "Is an anagram" : "Not an anagram") << endl;
    return 0;
}
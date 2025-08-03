#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > map;
        for(auto word : strs ){
            string str = word;
            sort(str.begin(), str.end());
            map[str].push_back(word);
        }
        vector<vector<string> > answer;
        for(auto map1 : map){
            answer.push_back(map1.second);
        }
        return  answer;
    }
};
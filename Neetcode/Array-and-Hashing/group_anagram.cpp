#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // unordered_map<string, vector<string> > map;
    // for(int i=0; i<strs.size(); i++){
    //     vector<int> count(26, 0);
    //     for(char j=0; j<strs[i].length(); j++){
    //         count[strs[i][j]-'a']++;
    //     }
    //     string key="";
    //     for(int k=0; k<25; k++){
    //     key += to_string(count[k])+"#";
    //     }
    //     map[key].push_back(strs[i]);
    // }
    // vector< vector< string > > result;
    // for(auto res :map){
    //     result.push_back(res.second);
    // }
    // return result;


        unordered_map<string, vector<string>> map;
        for(auto word: strs){
            string str = word;
            sort(str.begin(), str.end());
            map[str].push_back(word);
        }
        vector<vector<string> >result;
        for(auto res:map){
            result.push_back(res.second);
        }
        return result;
    }
};



int main(){
    Solution sol;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = sol.groupAnagrams(strs);
    
    for(const auto& group : result) {
        for(const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    return 0;
}
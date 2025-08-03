#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    string encode(vector<string>& strs) {
       string answer = "";
       for(int i =0; i<strs.size(); i++){
        answer +=to_string(strs[i].length())+"#"+ strs[i] ;
       }
       return answer;
    }

    vector<string> decode(string s) {
      vector<string> answer;
      int i = 0;
      while(i<s.length()){
        int j = i;
        while(s[j]!= '#')j++;
        int len = stoi(s.substr(i, j-i));
        string word = s.substr(j+1,len);
        answer.push_back(word);
        i=j+len+1;
      }
      return answer;
    }
};


int mian(){
    Solution sol;
    vector<string> strs = {"hello", "world"};
    string encoded = sol.encode(strs);
    cout << "Encoded: " << encoded << endl;

    vector<string> decoded = sol.decode(encoded);
    cout << "Decoded: ";
    for (const string& str : decoded) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}

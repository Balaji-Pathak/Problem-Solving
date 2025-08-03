#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val == '.') continue;
                if (rows[i].count(val)) return false;
                rows[i].insert(val);
                if (cols[j].count(val)) return false;
                cols[j].insert(val);
                int boxIndex = (i / 3) * 3 + (j / 3);
                if (boxes[boxIndex].count(val)) return false;
                boxes[boxIndex].insert(val);
            }
        }
        return true;
    }
};
int main(){
    Solution sol;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '6', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '2', '1', '9', '.', '.', '.'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '5', '7', '.', '9', '.'},
        {'.', '8', '7', '.', '9', '2', '.', '.', '.'}
    };
    
    bool isValid = sol.isValidSudoku(board);
    cout << "Is the Sudoku board valid? " << (isValid ? "Yes" : "No") << endl;

    return 0;
}

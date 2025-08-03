#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> boxes(9);
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == '.') continue;
                if (row[i].count(board[i][j])) return false;
                row[i].insert(board[i][j]);
                if (col[j].count(board[i][j])) return false;
                col[j].insert(board[i][j]);
                int boxIndex = (i / 3) * 3 + (j / 3);
                if (boxes[boxIndex].count(board[i][j])) return false;
                boxes[boxIndex].insert(board[i][j]);
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<vector<char>> board = {
        {'1','2','.','.','3','.','.','.','.'},
        {'4','.','.','5','.','.','.','.','.'},
        {'.','9','8','.','.','.','.','.','3'},
        {'5','.','.','.','6','.','.','.','4'},
        {'.','.','.','8','.','3','.','.','5'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','.','.','.','.','.','2','.','.'},
        {'.','.','.','4','1','9','.','.','8'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    bool isValid = sol.isValidSudoku(board);
    cout << "Is the Sudoku board valid? " << (isValid ? "Yes" : "No") << endl;

    return 0;
}

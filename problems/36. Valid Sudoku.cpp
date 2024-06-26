/*
36. Valid Sudoku
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        std::vector<std::set<char>> sq(3), col(9);
        std::set<char> row;
        for(int i = 0; i < board.size(); i++) { 
            row.clear();
            if(i%3 == 0)
                for(int j = 0; j < sq.size(); j++)
                    sq[j].clear();
            for(int j = 0; j < board[i].size(); j++) {
                if(board[i][j] != '.'){
                    if(sq[j/3].find(board[i][j]) != sq[j/3].end())
                        return false;
                    else
                        sq[j/3].insert(board[i][j]);
                    if(row.find(board[i][j]) != row.end())
                        return false;
                    else
                        row.insert(board[i][j]);
                    if(col[j].find(board[i][j]) != col[j].end())
                        return false;
                    else
                        col[j].insert(board[i][j]);
                }
            }
        }
        return true;    
    }
};

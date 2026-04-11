class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            unordered_map<char,int> seen;
            for(int i=0;i<9;i++){
                if(board[row][i] == '.') continue;
                if(seen.count(board[row][i])) return false;
                seen[board[row][i]] = 1;
            }
        }
        for(int col=0;col<9;col++){
            unordered_map<char,int> seen;
            for(int i=0;i<9;i++){
                if(board[i][col] == '.') continue;
                if(seen.count(board[i][col])) return false;
                seen[board[i][col]] = 1;
            }
        }
        // Check 3x3 sub-boxes
        for(int square=0;square<9;square++){
            unordered_map<char,int> seen;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    char c = board[row][col];
                    if(c == '.') continue;
                    if(seen.count(c)) return false;
                    seen[c] = 1;
                }
            }
        }
        return true;
    }
};
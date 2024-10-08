class Solution {
public:
    bool validsudoku(vector<vector<char>>& board, int row, int col){
        
        for(int i=0;  i<9; i++){
            if(i!=col && board[row][i] == board[row][col]){
                return false;
            }
        }
        for(int i=0;  i<9; i++){
            if(i!=row && board[i][col] == board[row][col]){
                return false;
            }
        }

        for(int i = (row/3)*3; i< (row/3)*3+3; i++){
            for (int j= (col/3)*3; j<(col/3)*3+3; j++){
                if(i==row && j==col ){
                    continue;
                } else if( board[i][j] == board[row][col]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j] != '.' && !validsudoku(board, i, j )){
                    return false;
                }
            }
        }
        return true;
    }
};
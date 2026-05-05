class Solution {
public:
    bool issaferow(vector<vector<char>>& board,int roww){
            set<char>row;
            
            for(int i=0;i<9;i++){
                char curr=board[roww][i];
                if (curr == '.') continue;

                if(row.find(curr)!=row.end()){
                    return false;
                }row.insert(curr);
            }
            return true;
    }      
    bool issafecol(vector<vector<char>>& board,int colm){
            set<char>col;
            
            for(int i=0;i<9;i++){
                char curr=board[i][colm];
                if (curr == '.') continue;
                if(col.find(curr)!=col.end()){
                    return false;
                }
                col.insert(curr);
            }
            return true;
    }
    bool issafesquare(vector<vector<char>>& board,int startrow,int startcol){
            set<char>square;
            
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    char curr = board[startrow + i][startcol + j];
                    if (curr == '.') continue;
                    if(square.find(curr)!=square.end()){
                    return false;
                }
                square.insert(curr);
              }
            }
            return true;
    }     
    bool isValidSudoku(vector<vector<char>>& board) {
            for(int i=0;i<9;i++){
                if(!issaferow(board,i)) return false;
            }
            for(int j=0;j<9;j++){
                if(!issafecol(board,j)) return false;
            }
            for(int i=0;i<9;i+=3){
                for(int j=0;j<9;j+=3){
                    if(!issafesquare(board,i,j)) return false;
                }
            }
            return true;
    }
};

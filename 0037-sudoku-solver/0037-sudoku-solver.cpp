class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
     solve(board);   
    }
    bool solve(vector<vector<char>>& board){
        for(int r=0;r<board.size();r++){
            for(int c=0;c<board[0].size();c++){
                if(board[r][c]=='.'){
                    for(char no='1';no<='9';no++){
                    if(isvalid(board,r,c,no)){
                       board[r][c]=no;
                       if(solve(board)==true){
                        return true;
                       } 
                       else board[r][c]='.';
                    }
                    }
                     return false;
                }
               
            }
        }
      return true; 
    }
    bool isvalid(vector<vector<char>>& board,int r,int c,char no){
        for(int i=0;i<9;i++){
            if(board[i][c]==no) return false;
            if(board[r][i]==no) return false;
            if(board[3*( r/3 )+i/3][3* (c/3) +i%3]==no) return false;
                    }
                    return true;
    }
};
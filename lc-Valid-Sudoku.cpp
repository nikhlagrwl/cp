// Contains the O(1) space solution to the valid sudoku problem. It doesn't check whether the sudoku is solvable or not.



bool isValidSudoku(vector<vector<char>>& board) {
    for(int i=0; i<9; ++i)
        for(int j=0; j<9; ++j){
            int a=board[i][j];
            if(a!='.'){
            board[i][j]='.';
            int m=(i/3)*3,n=(j/3)*3;
            for(int k=0; k<9; ++k,++n){
                if(n==(j/3+1)*3)
                    ++m,n=(j/3)*3;
                if(board[i][k]==a||board[k][j]==a||board[m][n]==a)
                   return false;
            }
            board[i][j]=a;
            }
        }
    return true;
}

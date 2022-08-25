class Solution {
public:
    bool check(int i, int j,vector<vector<char>>& board,int n,char c)
    {
        for(int k=0;k<n;k++)
        {
            if(board[i][k]==c||board[k][j]==c) return false;
        }
        int sx=(i/3)*3;
        int sy=(j/3)*3;
        for(int x=sx;x<sx+3;x++)
        {
            for(int y=sy;y<sy+3;y++)
            {
                if(board[x][y]==c) return false;
            }
        }
        return true;
    }
    bool suduko(int i, int j,vector<vector<char>>& board, int n)
    {
        if(i==n) return true;
        
        if(j==n) return suduko(i+1,0,board,n);
        
        if(board[i][j]!='.') return suduko(i,j+1,board,n);
        
        for(char c='1';c<='9';c++)
        {
            if(check(i,j,board,n,c))
            {
                board[i][j]=c;
                if(suduko(i,j+1,board,n)) return true;
            }
        }
        board[i][j]='.';
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int n=board.size();
        suduko(0,0,board,n);
    }
};
class Solution {
public:
    
    bool place(vector<vector<char>>& b, int n,int i, int j,char k)
    {
        //row or col
        for(int z=0;z<n;z++)
        {
            if(b[i][z]==k||b[z][j]==k)
            {
                return false;
            }
        }
        
        int sx=(i/3)*3;
        int sy=(j/3)*3;
        for(int x=sx;x<sx+3;x++)
        {
            for(int y=sy;y<sy+3;y++)
            {
                if(b[x][y]==k)
                {
                    return false;
                }
            }
        }
        
        return true;
    }
    
    bool suduko(vector<vector<char>>& b,int n,int i, int j)
    {
        //bc
        if(i==n) return true;
        
        if(j==n) 
        {
            return suduko(b,n,i+1,0);
        }
        
        if(b[i][j]!='.')
        {
            return suduko(b,n,i,j+1);
        }
        
        //rc
        for(char k='1';k<='9';k++)
        {
            if(place(b,n,i,j,k))
            {
                b[i][j]=k;
                bool next=suduko(b,n,i,j+1);
                if(next)
                {
                    return true;
                }
            }
        }
        b[i][j]='.';
        return false;
    }
    
    void solveSudoku(vector<vector<char>>& b) {
        int n=b.size();
        suduko(b,n,0,0);
    }
};
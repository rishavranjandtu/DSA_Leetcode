class Solution {
public:
     vector<vector<string>>d;
    bool place(vector<string>&ans, int n, int i, int j)
    {
        //col
        for(int k=0;k<=i;k++)
        {
            if(ans[k][j]=='Q')
            {
                return false;
            }
        }
        //ld

        int x=i;
        int y=j;
        while(x>=0&&y>=0)
        {
            if(ans[x][y]=='Q')
            {
                return false;
            }
            x--;
            y--;
        }
        x=i;
        y=j;
         while(x>=0&&y<n)
        {
            if(ans[x][y]=='Q')
            {
                return false;
            }
            x--;
            y++;
        }
        
        return true;
        
    }
    
    
    bool nq(vector<string>&ans, int n, int i)
    {
        
        if(i==n)
        {
            d.push_back(ans);
            return false;
        }
        
        for(int j=0;j<n;j++)
        {
            if(place(ans,n,i,j))
            {
                ans[i][j]='Q';
                bool next=nq(ans,n,i+1);
                if(next)
                {
                    return true;
                }
                ans[i][j]='.';
            }
        }
        return false;
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> ans(n, string(n,'.'));
        nq(ans,n,0);
        return d;
    }
};
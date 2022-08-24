class Solution {
public:
    bool check(int i, int j,vector<vector<string>>&ans, vector<string>&a,int n)
    {
        for(int k=0;k<=j;k++)
        {
            if(a[i][k]=='Q') return false;
        }
         for(int k=0;k<=i;k++)
        {
            if(a[k][j]=='Q') return false;
        }
        int x=i;
        int y=j;
        while(x>=0&&y>=0)
        {
            if(a[x--][y--]=='Q') return false;
        }
        x=i;
        y=j;
        while(x>=0&&y<=n-1)
{
            if(a[x--][y++]=='Q') return false;
        }
        return true;
        
    }
    bool nqueen(int i, int n, vector<string>&a, vector<vector<string>>&ans)
    {
        if(i==n)        
        {
            ans.push_back(a);
            return false;
        }
        
        for(int j=0;j<n;j++)
        {
            if(check(i,j,ans,a,n))
            {
                a[i][j]='Q';
                if(nqueen(i+1,n,a,ans))
                {
                    return true;
                }
                a[i][j]='.';
            }
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> a(n,string(n,'.'));
        nqueen(0,n,a,ans);
        return ans;
    }
};
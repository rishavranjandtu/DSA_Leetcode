class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        /*vector<vector<int>>v(numRows);
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                {
                    v[i].push_back(1);               
                
                }
                else
                {
                    v[i].push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
        }
        return v;
        */
        
        //onemore good solution
        vector<vector<int>>v;
        for(int i=0;i<numRows;i++)
        {
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=v[i-1][j-1]+v[i-1][j];
            }
            v.push_back(row);
        }
        return v;
        
    }
};
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& ii, vector<int>& ni) {
        vector<vector<int>>ans;
      int n=ii.size();
      for(int i=0;i<n;i++)
      {
        if(ni[0]>ii[i][1]) 
        {
          ans.push_back(ii[i]);
        }
        else if(ni[1]<ii[i][0])
        {
          ans.push_back(ni);
          ni=ii[i];
        }
        else 
        {
         
         ni[0]= min(ni[0],ii[i][0]);
         ni[1]= max(ni[1],ii[i][1]);
          
        }
      }
      ans.push_back(ni);
      return ans;
    }
};
class Solution {
public:
    vector<string> findAllRecipes(vector<string>& rec, vector<vector<string>>& in, vector<string>& sup) {
      map<string,vector<string>>m;
      map<string,int>r;
      vector<string>ans;
      for(int i=0;i<in.size();i++)
      {
        for(auto x:in[i])
        {
          m[x].push_back(rec[i]);
          r[rec[i]]++;
        }
      }
            queue<string>q;
      for(auto x:sup)
            {
              if(r[x]==0)  q.push(x);
            }
    while(!q.empty())
            {
              string f=q.front();
              q.pop();
              for(auto x:m[f])
              {
                r[x]--;
                if(r[x]==0) q.push(x);
              }
            }
            for(auto x:rec)
            {
              if(r[x]==0) ans.push_back(x);
            }
            return ans;
    }
};
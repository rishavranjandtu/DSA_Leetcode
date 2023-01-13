class Solution {
public:
  int ans=INT_MIN;
  int dfs(int node,vector<vector<int>>&adj, string &s)
  {
    int a=0;
    int b=0;
     for(auto x:adj[node])
     {
       int c=dfs(x,adj,s);
       if(s[node]==s[x]) {continue;}
       if(c>b) b=c;
       if(b>a) swap(b,a);
     }
  ans=max(ans,a+b+1);
    return 1+max(a,b);
  }
    int longestPath(vector<int>& parent, string s) {
      int n=parent.size();
        vector<vector<int>>adj(n);
      for(int i=1;i<n;i++)
      {
        adj[parent[i]].push_back(i);
      }
      int a=dfs(0,adj,s);
      return ans;
    }
}; 
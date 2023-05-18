class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
      vector<int>in(n,0);
      vector<int>out(n,0);
      int z=edges.size();
      for(int i=0;i<z;i++)
      {
        out[edges[i][0]]++;
        in[edges[i][1]]++;
      }
      vector<int>ans;
      for(int i=0;i<n;i++)
      {
        if(in[i]==0)
        {
          ans.push_back(i);
        }
      }
      return ans;
        
    }
};
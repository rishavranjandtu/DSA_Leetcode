class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        int z=edges.size(); vector<int>in(n,0);
      for(int i=0;i<z;i++) in[edges[i][1]]++;
      vector<int>ans;
      for(int i=0;i<n;i++) if(in[i]==0) ans.push_back(i);
      return ans;
    }
};
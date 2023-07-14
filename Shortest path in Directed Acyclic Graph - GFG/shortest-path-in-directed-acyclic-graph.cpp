//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void topo(int node,vector<int>&vis, vector<vector<pair<int,int>>>&adj,stack<int>&s)
    {
        vis[node]=1;
        for(auto x:adj[node])
        {
            if(!vis[x.first])
            {
                topo(x.first,vis,adj,s);
            }
        }
        s.push(node);
    }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<vector<pair<int,int>>>adj(N);
        for(int i=0;i<M;i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        }
        vector<int>vis(N,0);
        vector<int>dis(N,1e9);
        stack<int>s;
        for(int i=0;i<N;i++)
        {
            if(!vis[i])
            {
                topo(i,vis,adj,s);
            }
        }
        dis[0]=0;
        while(!s.empty())
        {
            int f=s.top();
            s.pop();
            for(auto x:adj[f])
            {
                int d=x.second;
                if(dis[f]+d<dis[x.first])
                {
                    dis[x.first]=dis[f]+d;
                }
            }
        }
        
        for(int i=0;i<N;i++) if(dis[i]==1e9) dis[i]=-1;
        return dis;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
class Solution {
public:
//     void dfs(int x,vector<vector<int>>& rooms,vector<int>&keys,vector<int>&vis)
//     {
    
//       keys[x]=1;
//       vis[x]=1;
//       if(x==rooms.size()) return;
//       for(auto a:rooms[x])
//       {
//         if((!vis[a]))
//         {
//           dfs(a,rooms,keys,vis);
          
//         }
//       }
      
//     }
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         int n=rooms.size();
//       int m=rooms[0].size();
//       vector<int>keys(n,0);
//       vector<int>vis(n,0);
//       keys[0]=1;
//       for(int i=0;i<n;i++)
//       {
//         vis[i]=1;
//         if(keys[i]==1)
//         {
//         for(auto x:rooms[i])
//         {
//           if(!vis[x])
//           {
//           dfs(x,rooms,keys,vis);
//           }
//         }
//         }
//         else if(keys[i]==0) return false;
//       }
//       return true;
//     }
  void dfs(int a,vector<vector<int>>& rooms,vector<int>&vis)
  {
    vis[a]=1;
    for(auto x:rooms[a])
    {
      if(!vis[x])
      {
        dfs(x,rooms,vis);
      }
    }
  }
   bool canVisitAllRooms(vector<vector<int>>& rooms)
   {
     int n=rooms.size();
     vector<int>vis(n,0);
     dfs(0,rooms,vis);
     for(int i=0;i<n;i++)
     {
       if(!vis[i]) return false;
     }
     return true;
       
   }
};
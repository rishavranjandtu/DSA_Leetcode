class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      
      int n=gas.size();
      int s_i=0;
      int t_g=0;
      int sum=0;
      for(int i=0;i<n;i++)
      {
            sum+= gas[i] - cost[i];
            t_g += gas[i] - cost[i];
            
            if (t_g < 0) {
                s_i = i+1;
                t_g = 0;
            }
            
        }
        return sum < 0 ? -1 : s_i;
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
//         int s_i=-1;
//         int t_g=0;
//       int n=cost.size();
//       for(int i=0;i<n;i++)
//       {
//         if(t_g+gas[i]>=cost[i])
//         {
//           s_i=i;
//           t_g=gas[i];
//           break;
//         }
//       }
//       if(s_i==-1) return -1;
      
//       for(int j=s_i+1;j<=n+s_i;j++)
//       {
//         t_g=t_g-cost[(j-1)%n]+gas[(j%n)];
//         if(t_g<cost[j%n]) return -1;
//       }
      
//       return s_i;
    }
};
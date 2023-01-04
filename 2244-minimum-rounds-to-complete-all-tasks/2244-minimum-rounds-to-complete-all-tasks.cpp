class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
      map<int,int>m;
      int n=tasks.size();
      for(int i=0;i<n;i++)
      {
        m[tasks[i]]++;
      }
      int ans=0;
      for(auto x:m)
      {
        int k=x.second;
        if(k==1) return -1;
        if(k%3==0) ans+=k/3;
        else if(k%3==2||k%3==1) ans+=(k/3)+1;
      }
      return ans;
    }
//         map<int,int>m;
//       set<int>v;
//       for(int i=0;i<tasks.size();i++)
//       {
//         if(m.find(tasks[i])!=m.end()){
//         m[tasks[i]]++;
//         v.insert(tasks[i]);
//         }
//         else
//         {
//           m[tasks[i]]=0;
//         }
//       }
//       vector<int>s;
//       for(auto x:v)
//       {
//         s.push_back(x);
//       }
//       int c=0;
//        int f=0; 
//       for(int i=0;i<s.size();i++)
//       {
//         while(m[s[i]]!=0)
//         {
//         if(m[s[i]]>=3) m[s[i]]-=3;
//         else if(m[s[i]]>=2) m[s[i]]-=2;
//           else if(m[s[i]]<=1) break;
//           c++;
//         }
//         if(m[s[i]]==0) f++;
//       }
//       if(f==s.size()) {cout<<f<<" "<<s.size();return c;}
//       return -1;
      
//     }
};
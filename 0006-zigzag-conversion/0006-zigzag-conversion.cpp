class Solution {
public:
    string convert(string s, int n) {
        vector<vector<char>>v;
      int g=s.size();
      string ans="";
      int k=0;
      int row=0;
      while(k!=g)
      {
        vector<char>a;
        if(row%2==0)
        {
          
        for(int i=0;i<n;i++)
        {
          if(k>=g) { a.push_back('@');}
          else a.push_back(s[k++]);
        }
        }
        else 
        {
           a.push_back('@');
          for(int i=1;i<n-1;i++)
        {
             if(k>=g) {a.push_back('@');}
          else a.push_back(s[k++]);
            
        }
           a.push_back('@');
              reverse(a.begin(), a.end());
        }
        v.push_back(a);
        if(k>=g) goto c;
        row++;
      }
      c:
      int m=v.size();
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(v[j][i]!='@')  ans=ans+v[j][i];
        }
      }
      return ans;
            
    }
};
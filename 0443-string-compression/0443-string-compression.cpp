class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
      char a=chars[0];
      int c=1;
      string ans="";
      for(int i=1;i<n;i++)
      {
        if(chars[i]!=a)
        {
          if(c==1) ans=ans+a;
          else {ans=ans+a; ans=ans+to_string(c);}
          a=chars[i];
          c=1;
        }
        else
        {
          c++;
        }
      }
      ans=ans+a; if(c!=1) ans=ans+to_string(c);
      int k=0;
      int i=0;
      while(i<ans.size()&&k<n)
      {
        chars[k++]=ans[i++];
      }
      return ans.size();
    }
};
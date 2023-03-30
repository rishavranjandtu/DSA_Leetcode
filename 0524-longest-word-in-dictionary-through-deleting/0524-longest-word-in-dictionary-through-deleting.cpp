class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
      int n=s.size();
      string ans="";
      for(auto x:d)
      {
        string a=x;
        int m=x.size();
        int i=0;
        int c=0;
        int j=0;
        while(i<n&&j<m)
        {
          if(s[i]==a[j])
          {
            c++;
            j++;
            
          }
          i++;
        }
        if(c==m)
        {
          if(c>ans.size()||(ans.size()==c&&ans>a)) ans=a;
        }
      }
       return ans; 
    }
};
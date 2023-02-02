class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>m;
      int a=1;
      for(auto x:order)
      {
        m[x]=a;
        a++;
      }
      
      
      int n=words.size();
      for(int i=0;i<n;i++)
      {
        for(int j=i+1;j<n;j++)
        {
          int s=words[i].size()>words[j].size()?words[j].size():words[i].size();
          for(int k=0;k<s;k++)
          {
            if(m[words[i][k]]>m[words[j][k]]) return false;
            else if(m[words[i][k]]<m[words[j][k]]) goto c;
          }
        if(s<words[i].size()) return false;
                                     c:
                                     continue;
        
      }
    }
      return true;
    }
};
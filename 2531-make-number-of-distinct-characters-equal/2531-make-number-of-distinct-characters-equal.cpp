class Solution {
public:
    bool isItPossible(string word1, string word2) {
       
      unordered_map<char,int>a;
      unordered_map<char,int>b;
      for(char x:word1) a[x]++;
      for(char x:word2) b[x]++;
      
      for(char i='a';i<='z';i++)
      {
        for(char j='a';j<='z';j++)
        {
          if(a.count(i)!=0&&b.count(j)!=0)
          {
            a[i]--;
            b[j]--;
            
            if(a[i]==0) a.erase(i);
            if(b[j]==0) b.erase(j);
            a[j]++;
            b[i]++;
            if(a.size()==b.size()) return true;
            
            a[j]--;
            b[i]--;
             if(a[j]==0) a.erase(j);
            if(b[i]==0) b.erase(i);
            a[i]++;
            b[j]++; 
          }
        }
      }
      return false;
    }
};
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
      int n=words.size();
      vector<int>v(n,0);
      int c=0;
      for(int i=0;i<n;i++)
      {
        int m=words[i].size();
        if((words[i][0]=='a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u')&&(words[i][m-1]=='a' || words[i][m-1] == 'e' || words[i][m-1] == 'i' || words[i][m-1] == 'o' || words[i][m-1] == 'u')) c++;
        v[i]=c;
      }
     
      int g=queries.size();
      vector<int>ans;
      for(int i=0;i<g;i++)
      {
        int sum=0;
        int s=queries[i][0];
        int e=queries[i][1];
       int h=s==0?v[e]:v[e]-v[s-1];
        ans.push_back(h);
      }
      return ans;
        
        
    }
};
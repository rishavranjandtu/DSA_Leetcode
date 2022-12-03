class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
      for(int i=0;i<s.size();i++)
      {
        m[s[i]]++;
      }
      priority_queue<pair<int,char>,vector<pair<int,char>>>q;
      for(auto x:m)
      {
        q.push({x.second,x.first});
      }
      string ans="";
      while(!q.empty())
      {
       ans+=string(q.top().first,q.top().second);
        q.pop();
      }
      return ans;
    }
};
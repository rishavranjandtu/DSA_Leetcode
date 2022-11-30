class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
         set<int>v;
      for(int i=0;i<arr.size();i++)
      {
        m[arr[i]]++;
      }
      for(auto x:m)
      {
        v.insert(x.second);
      }
      if(v.size()!=m.size()) return false;
      return true;
    }
};
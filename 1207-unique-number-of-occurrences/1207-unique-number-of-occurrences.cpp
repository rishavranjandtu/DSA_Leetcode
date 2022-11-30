class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
      vector<int>v;
      for(int i=0;i<arr.size();i++)
      {
        m[arr[i]]++;
      }
      for(auto x:m)
      {
        v.push_back(x.second);
      }
      sort(v.begin(),v.end());
     for(int i=0;i<v.size()-1;i++)
     {
       if(v[i]==v[i+1]) return false;
     }
      return true;
    }
};
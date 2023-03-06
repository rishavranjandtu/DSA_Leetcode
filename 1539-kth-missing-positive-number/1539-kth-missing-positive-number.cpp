class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int,int>m;
      for(auto x:arr) m[x]=1;
      int kk=0;
      for(int i=1;i<=k+arr.size();i++)
      {
        if(m.find(i)==m.end())
        {
          kk++;
          if(kk==k) return i;
        }
      }
      return -1;
    }
};
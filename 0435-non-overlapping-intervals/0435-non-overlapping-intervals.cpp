 bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
public:
 
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        int n=in.size();
      sort(in.begin(),in.end(),comp);
     
      int end=in[0][1];
      int c=0;
      for(int i=1;i<n;i++){
      if(in[i][0]>=end) end=in[i][1];
      else c++;
      }
      return c;
    }
};
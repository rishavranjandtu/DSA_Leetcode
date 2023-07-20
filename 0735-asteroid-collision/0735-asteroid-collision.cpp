/*
if s empty push the element
if(s.top()>num) while() s.push(t);
else (s.top()<num) w

*/



class Solution {
public:
    bool fun(int a,int b)
    {
      if(a>0&&b<0) return true;
      return false;
    }
    int calc(int a, int b)
    {
      if(abs(a)==abs(b)) return 0;
      int maxx=max(abs(a),abs(b));
      return maxx==a?a:b;
    }
    vector<int> asteroidCollision(vector<int>& a) {
      stack<int>s;
      for(auto x:a)
      {
        int tmp=x;
        while(!s.empty()&&fun(s.top(),tmp)==true)
        {
          tmp=calc(s.top(),tmp);
          s.pop();
          if(tmp==0) break;
        }
        if(tmp!=0)s.push(tmp); 
      }
        int n=s.size();
        vector<int>ans(n);
        int j=n-1;
        while(!s.empty())
        {
          ans[j--]=s.top();
          s.pop();
        }
        return ans;
        
    }
};
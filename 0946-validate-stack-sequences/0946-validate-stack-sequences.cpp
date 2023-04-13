class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
      stack<int>s;
      queue<int>q;
      int n=pushed.size();
      for(auto x:popped) q.push(x);
      for(int i=0;i<n;i++)
      {
        s.push(pushed[i]);
        if(s.top()==q.front())
        {
          while(!s.empty()&&!q.empty()&&s.top()==q.front())
          {
            s.pop();
            q.pop();
          }
        }
      }
       if(s.empty()==false) return false;
      return true;
    }
};
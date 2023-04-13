class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
      stack<int>s;
      //queue<int>q;
      int n=pushed.size();
     int j=0;
      for(int i=0;i<n;i++)
      {
        s.push(pushed[i]);
        while(!s.empty()&&s.top()==popped[j])
        {
          s.pop();
          j++;
        } 
      }
      if(!s.empty()) return false;
       
      return true;
    }
};
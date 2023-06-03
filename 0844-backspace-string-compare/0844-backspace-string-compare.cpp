class Solution {
public:
    bool backspaceCompare(string s, string t) {
      stack<int>a;
        stack<int>b;
      for(auto x:s){
        if(x=='#'&&!a.empty()) a.pop();
        else if(x!='#') a.push(x);
      }
      
      for(auto x:t){
        if(x=='#'&&!b.empty()) b.pop();
        else if(x!='#') b.push(x);
      }
      
      while(!a.empty()&&!b.empty())
      {
        if(a.top()==b.top()){a.pop(); b.pop();}
        else return false;
      }
      return (!a.empty()||!b.empty())?false:true;
        
    }
};
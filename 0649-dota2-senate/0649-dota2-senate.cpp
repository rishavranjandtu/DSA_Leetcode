class Solution {
public:
    string predictPartyVictory(string senate) {
      queue<int> a,b;
      for(int i=0;i<senate.size();i++)
      {
        if(senate[i]=='R') a.push(i);
        else b.push(i);
      }
      while(!a.empty()&&!b.empty())
      {
        int x=a.front();
        int y=b.front();
        a.pop();
        b.pop();
        if(x<y) a.push(x+senate.size());
        else if(x>y) b.push(x+senate.size());
      }
      
      if(a.empty()) return "Dire";
      else return "Radiant";
        
    }
};
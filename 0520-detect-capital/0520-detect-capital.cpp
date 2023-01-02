class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap=0;
      int index=-1;
      for(int i=0;i<word.size();i++)
      {
        if(word[i]>=65&&word[i]<=90)
        {
          cap++;
          index=i;
        }
        
      }
      if(cap==0) return true;
      else if(cap==word.size()) return true;
      else if(cap==1&&index==0) return true;
      return false;
    }
};
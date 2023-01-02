class Solution {
public:
    bool detectCapitalUse(string word) {
      int n=word.size();
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
     return (cap==n||cap==0||index==0&&cap==1);
    }
};
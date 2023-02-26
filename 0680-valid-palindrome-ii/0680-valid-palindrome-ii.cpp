class Solution {
public:
  bool pal(int i, int j, string s)
  {
    while(i<=j)
    {
      if(s[i++]!=s[j--]) return false;
    }
    return true;
  }
    bool validPalindrome(string s) {
        int i=0;
      int j=s.size()-1;
      while(i<=j)
      {
        if(s[i]==s[j]) {i++;j--;}
        else return pal(i,j-1,s)||pal(i+1,j,s);
      }
      return true;
    }
};
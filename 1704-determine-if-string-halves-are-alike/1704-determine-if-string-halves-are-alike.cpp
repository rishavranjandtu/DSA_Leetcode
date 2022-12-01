class Solution {
public:
    bool halvesAreAlike(string s) {
      int a=s.size()/2;
      int x=0;
      int y=0;
      for(int i=0;i<a;i++)
      {
         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
        s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
        s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') x++;
        
        if(s[i+a] == 'a' || s[i+a] == 'e' || s[i+a] == 'i' ||
        s[i+a] == 'o' || s[i+a] == 'u' || s[i+a] == 'A' ||
        s[i+a] == 'E' || s[i+a] == 'I' || s[i+a] == 'O' || s[i+a] == 'U') y++;
      }
        return x==y?true:false;
    }
};
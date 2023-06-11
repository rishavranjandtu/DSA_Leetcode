class Solution {
public:
    string shiftingLetters(string s, vector<int>& ss) {
        int n=ss.size();
        for(int i=n-2;i>=0;i--)
        {
          ss[i]+=(ss[i+1])%26;
        }
      
        for(int i=0;i<n;i++)
        {
          s[i]=('a'+(s[i]-'a'+ss[i])%26);
        }
      return s;
    }
};
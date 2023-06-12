class Solution {
public:
    int myAtoi(string s) {
      
      int n=s.size();
      int i=0;
        while(s[i]==' ') i++;
      
      bool p=s[i]=='+';
      bool ne=s[i]=='-';
      
      if(p==true) i++;
      if(ne==true) i++;
      double ans=0;
      while(i<n&&s[i]>='0'&&s[i]<='9') {ans=ans*10+(s[i]-'0'); i++;}
      
      if(ne==true) ans=-1*ans;
      
      if(ans>INT_MAX) return INT_MAX;
      else if(ans<INT_MIN) return INT_MIN;
        return ans;
    }
};
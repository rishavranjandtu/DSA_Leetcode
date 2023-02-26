class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
      int i=num1.size()-1;
      int j=num2.size()-1;
      int carry=0;
      while(i>=0&&j>=0)
      {
        int sum=((num1[i--]-'0')+(num2[j--]-'0'));
         ans=ans+to_string((sum+carry)%10);
         carry=(sum+carry)/10;
       // cout<<sum<<" "<<carry<<endl;
      }
      while(i>=0)
      {
        int sum=(num1[i--]-'0')+carry;
        ans+=to_string(sum%10);
        carry=sum/10;
      // cout<<sum<<" "<<carry<<endl;
      }
      while(j>=0)
      {
         int sum=(num2[j--]-'0')+carry;
        ans+=to_string(sum%10);
        carry=sum/10;
       // cout<<sum<<" "<<carry<<endl;
      }
      if(carry!=0)ans+=to_string(carry);
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
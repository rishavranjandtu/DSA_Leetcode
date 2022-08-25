class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
         string ans="";
        while(a.empty()==false||b.empty()==false||carry==1)
        {
            int sum=carry;
            if(a.empty()==false)
            {
                sum+=a.back()-'0';
                a.pop_back();
            }
            if(b.empty()==false)
            {
                sum+=b.back()-'0';
                b.pop_back();
            }
            ans+=sum%2+'0';
            carry=sum/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
class Solution {
public:
    int maximum69Number (int num) {
        int max=num;
       string n=to_string(num);
        for(int i=n.size()-1;i>=0;i--)
        {
            if(n[i]=='6')
            {
                n[i]='9';
                if(stoi(n)>max) max=stoi(n);
                n[i]='6';
            }
        }
        return max;
        
    }
};
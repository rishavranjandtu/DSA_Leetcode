class Solution {
public:
    int minNumberOfHours(int e, int E, vector<int>& energy, vector<int>& experience) {
        long long sum1=0;
        long long sum2=E;
        int a=0;
        int b=0;
        for(int i=0;i<energy.size();i++)
        {
            sum1+=energy[i];
        }
            if(sum1<e) a=0;
            else {a=sum1+1-e;}
        
        for(int i=0;i<experience.size();i++)
        {
            if(experience[i]<sum2)
            {
                sum2+=experience[i];
            }
            else
            {
                b+=experience[i]+1-sum2;
                sum2+=experience[i]+b;
            }
        }
        return a+b;
        
    }
};
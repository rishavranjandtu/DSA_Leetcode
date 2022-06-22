class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX;
        int price=0;
        for(int i=0;i<prices.size();i++)
        {
           minn=min(minn,prices[i]);
            price=max(price,prices[i]-minn);
        }
        return price;
    }
};
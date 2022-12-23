class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n = prices.size();
        int buy1 = 0, sell1 = prices[n-1], buy2 = 0;
        for (int i = n - 2; i >= 0; i--) {
            int buyi = max(buy1, sell1 - prices[i]);
            int selli = max(sell1, buy2 + prices[i]);
            buy2 = buy1; buy1 = buyi; sell1 = selli;
        }
        return buy1;
    }
    
};
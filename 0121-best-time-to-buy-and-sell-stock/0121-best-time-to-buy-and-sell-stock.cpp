class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min = prices[0];
        int n = prices.size();
        int profit ;

        for (int i=1;i<n;i++){
            int profit = prices[i]-min;

            if (profit > max_profit){
                max_profit = profit;
            }

            if(prices[i]<min){
                min = prices[i];
            }
        }
        return max_profit;
    }
};
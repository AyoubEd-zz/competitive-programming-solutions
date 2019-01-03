class Solution {
    public int maxProfit(int[] prices) {
        if(prices.length == 0) return 0;
        int m = prices[0];
        int profit = 0;
        for(int i=1; i<prices.length ; i++){
            if(prices[i]-m > profit) profit = prices[i]-m;
            else if(m > prices[i]) m =prices[i];
        }
        return profit;
    }
}

//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
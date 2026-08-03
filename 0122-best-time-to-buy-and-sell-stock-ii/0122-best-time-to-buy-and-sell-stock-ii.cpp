class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0;
        //1.iterate
        for(int i = 0; i < prices.size()-1; i++)
        {
            //2.if ele i > i+1 then let buy = i and sell = i+1
            if(prices[i] < prices[i+1])
            {
                // if(profit > (prices[i+1] - prices[i]))
                // {   //wkt profit = sell - buy
                profit += prices[i+1] - prices[i] ;
                // }
            }
        }
        return profit;
    }
};
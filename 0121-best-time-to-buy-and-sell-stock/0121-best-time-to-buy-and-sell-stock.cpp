class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
        // int min = prices[0];
        // int diff = 0;

        // for(int i = 0; i < prices.size(); i++)
        // {
        //     if(min > prices[i])
        //     {
        //         min = prices[i];
        //     }

        //     int max = prices[i];

        //     for(int j = i + 1; j < prices.size(); j++)
        //     {
        //         if(max < prices[j])
        //         {
        //             max = prices[j];
        //         }
        //     }

        //     if(diff < max - min)
        //     {
        //         diff = max - min;
        //     }
        // }

        // return diff;
    }
};
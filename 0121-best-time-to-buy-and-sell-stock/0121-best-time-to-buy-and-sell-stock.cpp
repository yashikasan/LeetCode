class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int gs = 0;
        int cs = 0;
        for(int i =1; i < prices.size(); i++)
        {
            int diff = prices[i] - prices[i-1];
            cs = diff + cs;
            if(cs < 0)
            {
                cs = 0;
            }
            else if(cs>gs)
            {
                gs = cs;
            }
        }
        return gs;
    }
};







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
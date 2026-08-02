class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> nyan(2) ;
        // if(nums.size() == 2)
        //     {
        //         nyan[0] = 0;
        //         nyan[1] = 1;
        //         return nyan;
        //     }
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if( i == j){
                    continue;
                }
                if( nums[j] + nums[i] == target)
                {
                    nyan[0] = i;
                    nyan[1] = j;
                }
            }
        }
        return nyan;
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        //lets take max
        int max = nums.size();
        int verification = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < max; i++)
        {
            if(nums[i] != verification)
            {
                return verification;
            }
            verification++;
        }




        return nums.size();
    }
};











        // if(nums.size() == 1)
        // {
        //     if(nums[0]==1)
        //     {
        //         return 0;
        //     }
        //     else
        //     {
        //         return 1;
        //     }
        // }
        // else if(nums.size()==2 && nums[0]==1 && nums[1]==2)
        // {
        //     return 0;
        // }
        // sort(nums.begin(), nums.end()); //1,2

        // for(int i = 0; i<nums.size()-1; i++)
        // {
        //     if(nums[i+1] != nums[i]+1)
        //     {
        //         return nums[i]+1;
        //     }
        // }

        // return nums.size();
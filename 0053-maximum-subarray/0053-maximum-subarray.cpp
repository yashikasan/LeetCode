class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0;
        int max=INT_MIN;
        // if(nums.size()==1)
        // {
        //     return nums[0];
        // }
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            if(curr>max)
            {
                max=curr;
            }
            if(curr<0)
            {
                curr=0;
            }
        }
            // if(max==current)
            // {
            //     return current;
            // }
        return max;
    }
};
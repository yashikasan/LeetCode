class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int k=0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size()-1; j++)
            {
                if(nums[j]==0)
                {
                    swap(nums[j], nums[j+1]); 
                }
            }
        }
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end()); //1,2,2
        int i = 0;
        int m = nums.size();
        while(i < nums.size()-1)
        {
            if(nums[i] != nums[i+1] && i % 2 == 0)
            {
                return nums[i];
            }
            i++;
        }
        return nums[i];
    }
};
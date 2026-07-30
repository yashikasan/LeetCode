class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int nyan = nums.size();
        sort(nums.begin(), nums.end());
        return nums[nyan/2];
    } 
};
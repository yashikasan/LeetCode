class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {   

        vector<int> neww(nums.size()*2);
        for (int i =0; i< nums.size(); i++)
        {
            neww[i] = nums[i];
        }
        for (int i = 0; i<nums.size(); i++)
        {
            neww[nums.size()+i] = nums[i];
        }
        return neww;
    }
};
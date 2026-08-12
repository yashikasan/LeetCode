class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        int i = 0;
        int count =0;
        sort(nums.begin(), nums.end());
        while( i < nums.size() -1 )
        {
            count = count + min(nums[i], nums[i+1]); 
            i = i +2;     
        }
        return count;
    }
};
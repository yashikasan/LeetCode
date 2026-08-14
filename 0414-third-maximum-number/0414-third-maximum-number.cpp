class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end()); //1,2,2, // 1,2 -> 4
        //remove duplicates
        
        for(int i = 0; i < nums.size()-1 ; i++)
        {
            if(nums[i] == nums[i+1])
            {
                nums.erase(unique(nums.begin(), nums.end()), nums.end());
            }
        }int size= nums.size();
        if(size >= 3)
        {
            return nums[nums.size()-3];
        }
        else if( size == 1)
        {
            return nums[0];
        }
        else if(size == 2)
        {
            return nums[1];
        }
        return 0;
    }
    
    
};
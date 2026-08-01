class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k = 1;
        for (int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

        // for(int i = 0; i <nums.size(); i++)
        // {
        //     if( nums[i] == nums[i+1])
        //     {
        //         nums[i+1] = NULL;
        //     }
        // }
        // int count = 0;
        // for(int i =0; i <nums.size(); i++)
        // {
        //     count = count+1;
        // }

        // return count;
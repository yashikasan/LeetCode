class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        //return smallest positive integer that isnt present in the array
        sort(nums.begin(), nums.end());
        //0,1,2
        int j = 1;
        for(int i =0; i < nums.size(); i++)
        {
            if(nums[i] == j && nums[i] > 0)
            {
                j++;
            }
        }
        return j; 
    }
};
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
        // // wut i want
        // //1.sort the array 
        // // 2. find missing elements  
        // // a. find missing by - > compare with next one, if nums[i]+1 != nums[i+1]
        // // c. return missing+1 i.e. nums[i]+1;
        // // 3. return smallest missing element

        // sort(nums.begin(), nums.end());
        // // -1, 1, 3, 4

        // for(int i = 0; i < nums.size()-1; i++) 
        // {
        //     if(nums[i]+1 != nums[i+1])
        //     {
        //         return nums[i]+1;
        //     }
        // }
        // int nextTolast = nums.size()+1;
        // return nextTolast;
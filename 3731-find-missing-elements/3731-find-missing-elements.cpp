class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<int> missing;
        int j =0; 
        for(int i = nums[0]; i < nums[nums.size()-1]; i++ )
        {
            if(nums[j] == i)
            {
                j++;
            }
            else
            {
                missing.push_back(i);
            }

        }
         return missing;
    }
   
};
















    //     vector<int> missing;
    //     sort(nums.begin(), nums.end());
    //     for(int i =0 ; i <nums.size()-1; i++)
    //     {
    //         int j = i;
    //         if(nums[i+1]-nums[i] != 1 || nums[i+1]-nums[i] != missing[i}])
    //         {
    //             missing.push_back(nums[j] + 1);
    //             j++;
    //         }
    //     }//1,5
    //     //

    // return missing;














        // sort(nums.begin(), nums.end());
        // vector<int> missing;
        // for(int i = 0; i < nums.size(); i++)
        // {
            
        //     if(nums[i+1] - nums[i] == 1)
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         int diff;
        //         diff = nums[i+1]- nums[i];
        //         for(int j = 0; j <= diff ; i++)
        //         {
        //             missing.push_back(nums[i+1]-1);
        //             i++;RIP

        //         }
        //     }
        // }
        // return missing;
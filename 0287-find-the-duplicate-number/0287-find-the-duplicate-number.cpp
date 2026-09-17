class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(int i = 0; i <mp.size(); i++)
        {
            if(mp[i]>1)
            {
                return i;
            }
        }
        return 0;
    }
};
    //    sort(nums.begin(), nums.end());
    //     int n = nums.size();
    //     int l = 0;
    //     int r = 1;
    //     while(l<r)
    //     {
    //         if( nums[l] == nums[r])
    //         {
    //             return nums[l];
    //         }
    //         else
    //         {
    //             r++;
    //             if(r==n)
    //             {
    //                 l++;
    //                 r = l+1;
    //             }
    //         }
            
    //     }
    //     return 0;















    
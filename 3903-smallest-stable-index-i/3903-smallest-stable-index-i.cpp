class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n, 0);
        int mino = INT_MAX;
        int maxo = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            mino = min(mino, nums[i]);
            arr[i] = mino;
        }//0,0,1,4

        for (int i = 0; i < n; i++)
        {
            maxo = max(maxo, nums[i]);
            int score = maxo - arr[i];
            if (score <= k) 
            {
                return i;
            }
        }//5-4=1
        return -1;
    }
};
    // {
    //     vector<int> ar1; 
    //     ar1.push_back(nums[0]); //5
    //     vector<int> ar2(nums); //5,0,1,4
    //     int maxi = 0;
    //     int mini = 0;

        
    //     vector<int> vecdiff;
    //     for(int i = 0; i <= nums.size(); i++)
    //     {
    //          maxi = *max_element(ar1.begin(), ar1.end());
    //          mini = *min_element(ar2.begin(), ar2.end());

    //         int diff= maxi - mini;
    //         vecdiff.push_back(diff);
            
    //         ar1.push_back(nums[i]);
    //         ar2.erase(ar2.begin()+i);
    //         if( i == nums.size()-1 && *min_element(vecdiff.begin(), vecdiff.end()) <= k)
    //         {
    //             int m = *min_element(vecdiff.begin(), vecdiff.end());
    //             return m;
    //         }
    //         else{
    //             return -1;
    //         }

    //     }
    //     return -1;

        
    // }
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
       vector<int> ne(nums.size());
       int j = 0;
       for(int i = 0; i < nums.size(); i++)
       {
        if(nums[i]<pivot)
        {
            ne[j] = nums[i];
            j++;
        }
       }
        for(int i = 0; i < nums.size(); i++)
        {
        if(nums[i]==pivot)
        {
            ne[j] = nums[i];
            j++;
        }
        }
        for(int i = 0; i < nums.size(); i++)
        {
        if(nums[i]>pivot)
        {
            ne[j] = nums[i];
            j++;
        }
        }
        return ne;
    }
};
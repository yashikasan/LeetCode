class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {   
        // logic : 1. create a new array such that it is double the size of existing array
        // 2. copy exising integers in the array
        // 3. repeat the copying of integers right from where we left

        vector<int> new_arr(2* nums.size());
        for(int i = 0; i < nums.size(); i++){
            new_arr[i] = nums[i];
            new_arr[i + nums.size()] = nums[i];
        }
    
    return new_arr;

    }
};
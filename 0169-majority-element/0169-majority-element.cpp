class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       int val = 0;
    //    for(int i=0; i<nums.size();i++){
    //     for(int j=0; j<nums.size()-1; j++){
    //         if(nums[j]>nums[j+1]){
    //             int temp = nums[j];
    //             nums[j] = nums[j+1];
    //             nums[j+1] = temp;
    //         }
    //     }
    //    } 
    sort(nums.begin(), nums.end());

      val = nums.size();
       return nums[val/2];
    }
};
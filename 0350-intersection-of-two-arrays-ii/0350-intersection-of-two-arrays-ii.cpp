class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> vec;
        for(int i = 0; i < nums1.size(); i++)
        {
          for(int j = 0; j <nums2.size(); j++)
          {
            if(nums2[j]== nums1[i])
            {
                vec.push_back(nums2[j]);
                nums2[j]= -1;
                break;
            }
          }
          
        }
        return vec;
    }
};
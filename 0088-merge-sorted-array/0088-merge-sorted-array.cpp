class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> arr;

        // Add the first m elements of nums1
        for (int i = 0; i < m; i++)
        {
            arr.push_back(nums1[i]);
        }

        // Add all elements of nums2
        for (int i = 0; i < n; i++)
        {
            arr.push_back(nums2[i]);
        }

        // Sort the new array
        sort(arr.begin(), arr.end());

        // Put sorted elements back into nums1
        for (int i = 0; i < arr.size(); i++)
        {
            nums1[i] = arr[i];
        }
    }
};
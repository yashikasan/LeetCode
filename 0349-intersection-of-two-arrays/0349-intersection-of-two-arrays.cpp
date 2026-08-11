class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> wtf;
        int i = 0;
        int j = 0;
        vector<int> tf;

        while(i < nums1.size())
        {
            if(j >= nums2.size())
            {
                j = 0;
                i++;
                continue;
            }

            if(nums1[i] != nums2[j])
            {
                j++;
            }
            else
            {
                wtf.push_back(nums1[i]);
                nums1[i] = -1;
                j = 0;
                i = 0;
            }
        }for(int i = 0; i < wtf.size(); i++)
        {
            bool found = false;

            for(int j = 0; j < tf.size(); j++)
            {
                if(wtf[i] == tf[j])
                {
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                tf.push_back(wtf[i]);
            }
        }

        return tf;
    }
};

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
//     {
//         vector<int> wtf;
//         int i = 0;
//         int j = 0;
//         vector<int> tf;
//         while( i < nums1.size())
//         {
//             if(nums1[i] != nums2[j])
//             {
//                 i++;
//             }
//             else
//             {
//                 wtf.push_back(nums1[i]);
//                 j++;
//                 nums1[i] = -1;
//                 i=0;
//             }
//             if(j == nums2.size())
//             {
//                 j = 0;
//                 i++;
//             }
//         }
        
//         if(wtf.size() == 2 && wtf[0] == wtf[1])
//             {
//                 tf.push_back(wtf[0]);
//             }

//         for(int i = 0; i < wtf.size(); i++)
//         {
//             if(i + 1 < wtf.size() && wtf[i] != wtf[i + 1])
//             {
//                 tf.push_back(wtf[i]);
//             }
//         }

//         return tf;
//     }
// };
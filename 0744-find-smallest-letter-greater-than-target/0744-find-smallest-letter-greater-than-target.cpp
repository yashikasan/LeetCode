class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int h=letters.size()-1;
        int mino=INT_MIN;
        vector<int> arr;
        for(int i=0;i<letters.size();i++)
        {
            arr.push_back(letters[i]-'a');
        }
        int val=target-'a';
        while(l<h)
        {
            int mid=(l+h)/2;
            if(val<arr[mid])
            {
                mino=arr[mid];
                h=mid;
            }
            else
            {
                l=mid+1;
            }
        }

        if(val>=arr[l])
        {
            return letters[0];
        }

        return arr[l]+'a';
    }
};


// class Solution {
// public:
//     char nextGreatestLetter(vector<char>& l, char target) 
//     {
//         vector<int> nums;
//         for(int i = 0; i < nums.size()-1; i++)
//         {
//             nums.push_back(l[i] -'a');
//         }

//         int low = 0;
//         int hi = nums.size()-1;
//         int find = target - 'a';
//         int mini = INT_MIN;
//         while(low< hi)
//         {
//             int mid = (low+hi)/2;
//             if(nums[mid]> find)
//             {
//                 mini = nums[mid];
//                 hi = mid-1;
//             }
//             else
//             {
//                 low = mid+1;
//             }
//         }
//         if(find== nums[low])
//         {
//             return l[0];
//         }
//          return nums[low]+'a';
//     }
// };

























        // sort(l.begin(), l.end());
        // int low = 0;
        // int hi = l.size()-1;
        // while(low<hi)
        // {
        //     int mid = (low+hi)/2;
        //     if(target > l[mid])
        //     {
        //         l = mid+1;
        //     }
        //     else if(target < l[mid])
        //     {
        //         l = mid-1;
        //     }
        // }
        // return 'a';
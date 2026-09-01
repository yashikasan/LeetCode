class Solution {
public:
    int scoreOfString(string s) 
    {
        int sum = 0;
        vector<int> arr(s.size());
        for(int i = 0; i < s.size(); i++)
        {
            arr[i] = s[i];
        }
        for(int i = 0; i < arr.size()-1; i++)
        {
            sum += abs(arr[i] - arr[i+1]);
        }
        return sum;
    }
};
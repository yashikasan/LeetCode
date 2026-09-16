class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
      unordered_map<int, int> mp;
      int ans= -1;
      for(int i = 0; i < arr.size(); i++)
      {
         mp[arr[i]]++;
      }        
      for(int i = 1; i <=500; i++)
      {
        if(mp[i]==i)
        {
            ans = i;
        }
      }
      return ans;
    }
};
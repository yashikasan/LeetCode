class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int left = 0;
        int n = height.size();
        int right = n-1;
        int area=0;
        while(left<right )
        {
            int l = abs(left-right);
            int currentarea = l * min(height[left], height[right]);
            area = max(currentarea,area);
            if(height[left]<height[right])
            {
                left++;
            }
            else{
                right--;
            }
        }
        return area;
    }
};

// int l = abs(left-right);
// int area = l * min(height[left], height[right]);
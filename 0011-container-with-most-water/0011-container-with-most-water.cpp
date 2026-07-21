class Solution {
public:
    
    int maxArea(vector<int>& height) {
       int max=0;
       int n= height.size();
       int left=0;
       int right=n-1;;

       while(left<right)
       {
        int distance=right-left;
           int area=min(height[left],height[right])* distance;
           if(area>max)max=area;
           if(min(height[left],height[right])== height[left])left++;
           else right--;

       }
        return max;
    }
};
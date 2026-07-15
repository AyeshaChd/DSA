class Solution {
public:
    
    int maxArea(vector<int>& height) {
        int left=0;int right=height.size()-1;
      int max_Area=0;
      while(left<right)
      {
              
           int curr_Area=min(height[left],height[right])*(right-left);
           if(curr_Area>max_Area)max_Area=curr_Area;
           if(height[left]>height[right]) right--;
              else left++;
           
      };
      return max_Area;
        
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's Algorithm 
        // A Simple Analogy: The Train Ride
        int max= nums[0];
        int current_max=nums[0];
        if(nums.size()==1)return nums[0];
        for(int i=1;i<nums.size();i++)
        {     
  if(current_max+nums[i]<nums[i])
  current_max =nums[i];
      else current_max= current_max+nums[i];   
      if(current_max>max)max=  current_max;
        };
        return max;
    };
};
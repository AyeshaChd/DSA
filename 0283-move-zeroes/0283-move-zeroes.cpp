class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j= -1;
      
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] == 0 && j== -1) 
             { j = i;}
            
             if(nums[i] != 0 && j != -1) 
             { nums[j] = nums[i];
               nums[i]=0;
               j++;
             };
             
        };
      
    };
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()== 0 || nums.size()==1) return nums.size();
        int recent=nums[0];
        int j=1;int k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=recent)
            {
                nums[j]=nums[i];
                recent=nums[i];
                j++;
                k++;
            }
        };

return k;
    }
};
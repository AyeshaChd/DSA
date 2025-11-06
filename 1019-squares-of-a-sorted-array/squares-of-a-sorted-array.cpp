class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

       int left=0;
       int right= nums.size()-1;

        for (int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        };

        sort(nums.begin(),nums.end());
     
     return nums;
    };
};
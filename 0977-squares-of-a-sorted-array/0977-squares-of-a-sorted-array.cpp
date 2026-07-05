class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        int left=0; int right=n-1;
        int i=n-1;
        // as array  is already sorted then means largest elements will be at end and start, we will compare them and put large value in new array  and move index
       while(left<right)
       {
         if(nums[left] * nums[left] >  nums[right] * nums[right]|| nums[left] * nums[left] == nums[right] * nums[right])
         {
            res[i]=nums[left] * nums[left];
         left ++;
         i --;}
         else {
            res[i]=nums[right] * nums[right];
            right--;
            i--;
         }
       }
       // as when loop ends last smaller value is not pushed in res
       res[i]= nums[left]*nums[left];
       return res;
       
    }
};
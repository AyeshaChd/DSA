class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
      double sum=0;
      int n=nums.size();
        for(int i=0;i<k;i++)
        {
           sum=sum+nums[i];
        };
        double max_Avg= sum/k;
      for(int i=1;i<=n-k;i++)
      {
           sum=sum-nums[i-1]+ nums[i+k-1];
            double curr_Avg = sum/k;

            if(curr_Avg > max_Avg ){
                max_Avg=curr_Avg;
            };
      };
      return max_Avg;
    }
};
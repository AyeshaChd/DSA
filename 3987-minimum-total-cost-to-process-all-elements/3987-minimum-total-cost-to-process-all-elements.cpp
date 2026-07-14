class Solution {
public:
    const int M=1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        long long total=0;
        long long resources=k;
        long  long total_cost=0;
      long long operation=0;
       
        for(int j=0;j<nums.size();j++)
            { 
                if(resources<nums[j])
                {   
                   int need= nums[j]-resources;
                    int current_operation=( need+k-1)/k;
                    resources += current_operation*k;
                    operation +=current_operation;
                    
                } 
                resources=resources-nums[j];
            }
       if(operation % 2== 0){
           long long a =(operation/2)% M;
           long long b=(operation +1)%M;
           return (a*b)%M;
       } 
        long long a= operation% M;
        long long b=((operation+1)/2%M);
        return (a*b)%M;
        
        
    }
};
class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>original;
        int n=nums.size();
       int k=0;
       int l=0;
        for(int i=0; i<n-1; i++)
        {  
          int j=i+1;
          if( nums[j]< nums[i])
          {
            k=j;
            l=j;
          }
          if(k!=0)
          {
           original.push_back(nums[k]);
           k++;
          }
            
         
        }
        for(int i=0 ;i<l ;i++)
        {
            original.push_back(nums[i]);
           
        }
        
        
        int m = original.size();
        int j=0;
        for (int i=0; i<m-1;i++)
        { 
            j=i+1;
            if( original[j]< original[i])
            {
                return false;
            }
        }
        return true; 
    }
};
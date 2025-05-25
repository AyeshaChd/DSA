class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int j=1;
        int k=1;
        int n=nums.size();
        for(int i=0; i<n;i++)
        { 
            // j will be on place of unique element
            if(i!=0 && nums[i]>nums[j-1])
            {
                nums[j]=nums[i];
                j++;
                k++;
              
            }
            
        }
     
       return k;
        
    }
};
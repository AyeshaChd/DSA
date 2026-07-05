class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int k=0;
        int j= n;
        int index=0;
        vector<int>res(2*n);
        for(int i=0; i<n ;i++ )
        {
            res[index]=nums[k];
            k++;
            index++;
            res[index]=nums[j];
            j++;
            index++;
            
        };
        return res;
    };
};
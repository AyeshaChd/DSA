class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int count=0;
       
        
        for(int i=0;i< nums.size();i++ )
        {
            if(i ==  nums.size()-1 && count==0)
            {
                ans.push_back (nums[i]);
                i=0;
                count++;
            }
           ans.push_back (nums[i]);
        }

        return ans;
    }
};
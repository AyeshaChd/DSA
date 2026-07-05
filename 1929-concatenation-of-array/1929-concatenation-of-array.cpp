class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int j=0;
        int n=2*nums.size();
    vector<int>ans(n,0);
        for(int i=0; i< ans.size();i++)
        {
            ans[i]=nums[j];
            j++;
            if(j == nums.size())
            {
                j=0;
            };
        };
        return ans;
    };
};
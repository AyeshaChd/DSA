class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashmap;
        vector<int>res;
     
        for(int i=0; i<nums.size();i++)
        {
           if(hashmap.find(nums[i])== hashmap.end())
           {
            hashmap[nums[i]]=i;
           };
             
        };
        for(int i=0; i< nums.size();i++)
        {
            if(hashmap.find(target-nums[i]) !=hashmap.end() && hashmap[target-nums[i]] != i)
            {
            res.push_back(hashmap[target-nums[i]]);
            res.push_back(i);
            return res;
            };
        };
        return res;
    };
};
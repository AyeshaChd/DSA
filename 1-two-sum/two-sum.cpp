class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        };
        for (int i = 0; i < nums.size(); i++) {
            x = target - nums[i];
            if (mp.find(x) != mp.end()) {
                if (mp[x] != i)
                    return {mp[x], i};
            };
        };
        return {};
    };
};
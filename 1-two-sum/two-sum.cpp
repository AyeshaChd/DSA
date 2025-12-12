class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     unordered_map<int, int> mp;
    //     int x = 0;
    //     for (int i = 0; i < nums.size(); i++) {
    //         mp[nums[i]] = i;
    //     };
    //     for (int i = 0; i < nums.size(); i++) {
    //         x = target - nums[i];
    //         if (mp.find(x) != mp.end()) {
    //             if (mp[x] != i)
    //                 return {mp[x], i};
    //         };
    //     };
    //     return {};
    // };
    // we can also do finding from  and storing in hashmap at same time;
    unordered_map<int,int> m;
        int one = 0, two = 0;
        for(int i=0;i<nums.size();i++){
            
            int rem = target-nums[i];
            if(m.find(rem)!=m.end()){
                one = m[rem];
                two = i;
            }else{
                m[nums[i]]=i;
            }

        }
        return {one,two};
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n= nums.size();

        // int XOR1 =0; // for N natural numbers which don't have any missing
        // number int XOR2 = 0; // for array elements which have a missing
        // numbers;

        // for (int i = 0; i < n ; i++)
        // {
        //     XOR2=XOR2^nums[i];
        //     XOR1=XOR1^i;
        // }
        // // considering first ex.
        // //ZOR1 = 1^2 after loop end
        //  // as i<n but we have to include n as well
        // XOR1=XOR1^n;  //  1^2^3
        // return XOR1^XOR2;

        map<int, int> mp;
        int n = nums.size();
        int missing_number =0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = nums[i];
        };
        for (int i = 0; i < n; i++) {
            if (mp.find(i + 1) == mp.end())
             { missing_number = i + 1; };
        };
        return missing_number;
    };
};
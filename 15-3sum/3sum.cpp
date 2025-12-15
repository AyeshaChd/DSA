class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // ==================================================================
        // ----the following ur ans is correct but  time limit exceeded bcs code
        // is too slow and o(n3)
        //         set<vector<int>> s;// bcz we are storing vector of 3 integers
        //         in  set
        //        sort(nums.begin(), nums.end());// so that triplet appear same
        //        to set as elements in nums are random;
        //         for (int i = 0; i < nums.size(); i++) {

        //             for (int j = i + 1; j < nums.size(); j++) {
        //                 for (int k = j + 1; k < nums.size(); k++) {

        //                     if (nums[i] + nums[j] + nums[k] == 0) {
        //                         s.insert({nums[i], nums[j], nums[k]});
        //                     };
        //                 };
        //             };
        //         };
        //        vector<vector<int>> result(s.begin(), s.end()); //converting
        //        set to vector bcz return type is vector.
        // return result;
        //     };
        // };
        // ==================================================================================
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            };
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];
                if (total > 0)
                   {k--;}
                else if (total < 0)
                    {j++;}
                else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while (nums[j] == nums[j - 1] && j < k) {
                        j++;
                    };
                };
            };
        };
            return res;
        };
    };

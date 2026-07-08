class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> hashmap;
        vector<int> ans;
        for (int i = 0; i < nums2.size(); i++) {
            hashmap[nums2[i]] = -1;
            for (int j = i; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    hashmap[nums2[i]] = nums2[j];
                    // cout<<"map:"<<nums2[i] <<hashmap[nums2[i]]<<endl;;
                    break;
                };
            };
            
           
        };
        for (int i = 0; i < nums1.size(); i++) {
                // cout<<hashmap[nums1[i]]<<endl;
                ans.push_back(hashmap[nums1[i]]);
                cout<<nums1[i]<<":"<<hashmap[nums1[i]]<<endl;
            };
         return ans;
    };
};
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // unordered_map<int, int> mp1;
        // unordered_map<int, int> mp2;

        // vector<vector<int>> ans;
        // set<int>s1;
        // set<int>s2;
        // int i = 0;
        // while (i < nums1.size() || i < nums2.size()) {
        //     if(i < nums1.size()){
        //    if(mp1.find(nums1[i] )== mp1.end()) mp1[nums1[i]]=nums1[i];
        //     }
        //     if(i < nums2.size()){
        //     if(mp2.find(nums2[i]) == mp2.end()) mp2[nums2[i]]=nums2[i];}
        //     i++;
        // };

        // for (int i = 0; i < nums1.size(); i++) {
        //     if (mp2.find(nums1[i]) == mp2.end() ) {
        //        s1.insert(nums1[i]);
               
        //     };
        // }

        // for (int i = 0; i < nums2.size(); i++) {
        //     if (mp1.find(nums2[i]) == mp1.end()) {
        //         s2.insert(nums2[i]);
        //     }
        // };
        // ans.push_back(vector<int>(s1.begin(),s1.end()));
        // ans.push_back(vector<int>(s2.begin(),s2.end()));
        // return ans;
        unordered_set<int>s1,s2;
        vector<vector<int>> ans(2);
        int i=0;
       while (i < nums1.size() || i < nums2.size()) {
             if(i < nums1.size()) s1.insert(nums1[i]);
           
            if(i < nums2.size()) s2.insert(nums2[i]);
        
             i++;
         };
        
          for(auto i:s1)
          {if(s2.find(i) == s2.end() )ans[0].push_back(i);};
          for(auto i:s2)
          {if(s1.find(i)== s1.end()) ans[1].push_back(i);};
          return ans;
    };
};
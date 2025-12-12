class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       
        // unordered_map<int, int> mp1;
        // unordered_map<int, int> mp2;
        // vector<int>v1;
        // vector<int>v2;
        // unordered_set<int>s1(nums1.begin(),nums1.end());
        // unordered_set<int>s2(nums2.begin(),nums2.end());

        // // we are using this type of loop bcz in sets elements can't acccessed by indexing.
        // for (int x : s1) {

        //     mp1[x]++;
        // };

        // for (int y : s2) {
        //     mp2[y]++;
        // };
        // for (int x: s1) {
        //     if (mp2.find(x) ==  mp2.end() ) {
                
                
        //         v1.push_back(x);
                
               
        //     };
        // };
        //     for (int x: s2) {
        //         if (mp1.find(x) == mp1.end() ) {
        //           v2.push_back(x);
        //         };
        //     };
               
        //         return {v1,v2};

        // / doing it using set only

        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
     vector<int> v1,v2;
// range based for loop is used for set bcz elements of sets cannot be accessed through indexing.
     for(auto x: s1)
{
    if(s2.count(x)== 0) v1.push_back(x);
};
     for(auto x: s2)
{
    if(s1.count(x)== 0) v2.push_back(x);
};
return {v1,v2};

            };
        };
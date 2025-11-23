class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    //    
    // with array
       
        // int count = 0;
        // vector<int> ans;
        // for (int i = 0; i < nums1.size(); i++) {
        //     for (int j = 0; j < nums2.size(); j++) {
        //         if (nums1[i] == nums2[j]) {
        //             count++;
        //         }
        //         if (count !=0) {
        //             if (nums1[i] < nums2[j]) {
        //                 ans.push_back(nums2[j]);
        //                 break;
        //             }
        //         };
        //         if (j == nums2.size() - 1) {
        //             ans.push_back(-1);
        //         };
                
        //     };
        //     count=0;
        // };
        // return ans;

        // with  stack and hashmap;
          unordered_map<int, int> mp;
    stack<int> st;

    for(int i=nums2.size()-1; i>=0; i--){
      while(!st.empty() && st.top() < nums2[i]){
        st.pop();
      }
      if(st.empty() || st.top() < nums2[i]) mp[nums2[i]] = -1;
      else mp[nums2[i]] = st.top();
      st.push(nums2[i]);
    }

    vector<int> solution;
    for(int i=0; i<nums1.size(); i++){
      solution.push_back(mp[nums1[i]]);
    }


    return solution;
  }
};
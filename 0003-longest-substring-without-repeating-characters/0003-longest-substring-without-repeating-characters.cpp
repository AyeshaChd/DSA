class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<int,int>mp;
         int r=0;
         int l=0;
         int max_length=0;
         while(r<n)
         {
            if(mp.find(s[r]) != mp.end()&& mp[s[r]]>=l)l=mp[s[r]]+1;
    int length = r-l+1;
           max_length=max(length,max_length);
           mp[s[r]]=r;
           r++;
            
         }; return max_length;
    };
};
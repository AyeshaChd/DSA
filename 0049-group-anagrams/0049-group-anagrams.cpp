class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0; i<strs.size();i++)
        {      int count[26]={0};
       
                    string original= strs[i];
                    string s=strs[i];
                    for(char c : s)
                    {
                       count[c - 'a']++;
                    }
              string key="";
              for(int i=0; i<26;i++)
              {
key+=to_string(count[i])+ "#";
              }
                    mp[key].push_back(original);
        };
        for(auto it : mp)
        {
            ans.push_back(it.second);

        };
        return ans;
    };
};;
// //  sort(s.begin(),s.end()); if sort is allow put sorted string as key and push original;
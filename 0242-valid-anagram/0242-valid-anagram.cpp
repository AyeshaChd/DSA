class Solution {
public:
    bool isAnagram(string s, string t) {
        // vector<int>lowerCaseArray(26,0);
        // int i = 0;
        // int j = 0;

        // while (i < s.size() || i < t.size()) {
        //     if ( i < s.size()) {
        //         lowerCaseArray[s[i] - 'a'] = lowerCaseArray[s[i] - 'a'] + 1;
        //         cout<<"s:"<<lowerCaseArray[s[i] - 'a'] <<endl;
        //     }
        //     if (i < t.size()) {
        //         lowerCaseArray[t[i] - 'a'] = lowerCaseArray[t[i] - 'a'] - 1;
        //           cout<<"t:"<<lowerCaseArray[t[i] - 'a'] <<endl;
        //     }
        //     i++;
        // };
        // while (j < lowerCaseArray.size()) {
        //     if (lowerCaseArray[j] != 0){
        //     cout<<j<<"j:"<<lowerCaseArray[j]<<endl;
        //         return false;}
        //         j++;
        // };
        // return true;
        if(s.size()!= t.size()) return false;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=mp[s[i]]+1;
            mp[t[i]]=mp[t[i]]-1; 
        }
        for(auto it:mp)
        {
            if(it.second != 0) return false;
        };
        return true;
    };
};
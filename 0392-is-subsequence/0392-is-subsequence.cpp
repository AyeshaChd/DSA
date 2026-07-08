class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;int j=0;
        while(j<t.size() && i < s.length())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else 
            {
                j++;
            }  
    };
cout << i << endl;
    if(i == s.length())
    return true;
    else return false;
  
    };
};
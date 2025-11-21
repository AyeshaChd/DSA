class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0; int j=0;
        int n =s.length();
        int count=0;
       
       

        while(i<n && j< t.size())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
                count++;
            }
            if(s[i]!=t[j])
            {
                j++;
            }
            
        };
         return i == s.size();
       
    };
};
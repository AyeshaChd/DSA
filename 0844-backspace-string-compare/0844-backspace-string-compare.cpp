class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="";
        string t1="";
        for(int i=0; i<s.size();i++)
        { 
            if( s[i]=='#' &&  !s1.empty())
            {
                s1.pop_back();
            }
            if(s[i]!='#') s1+=s[i];
            
        }
        for(int i=0; i<t.size();i++)
        {

            if( t[i]=='#' && !t1.empty())
            {
                t1.pop_back();
            }
            if(t[i]!='#')t1+=t[i];
        };
        return(s1==t1);
    };
};
class Solution {
public:
    bool isAnagram(string s, string t) {
    //    
    //  did by myself
    //      int i=0;
    //      int j=0;
    //     sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());

    //    if(s.length() != t.length())
    //    {
    //     return false;
    //    };

    //    while(i<s.length() && j<t.length())
    //    {
    //       if(s[i] !=t[j]  )
    //       {
    //         return false;
    //       }
    //       i++;
    //       j++;
    //    };

    //    return true;
    // optimized 

       if(s.length()!=t.length())
       {
        return false;

       }
    vector<int>freq(26,0);

    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;  //  a=97 , 97-97=0,98-97=1;

        freq[t[i]-'a']--;
    }

    for(int i=0; i<freq.size();i++)
    {
        if(freq[i]!=0)
        {
            return false;
        }
    }
    return true;
    };




       
        
        
    
};
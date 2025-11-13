class Solution {
public:
    bool isAnagram(string s, string t) {

         int i=0;
         int j=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

       if(s.length() != t.length())
       {
        return false;
       };

       while(i<s.length() && j<t.length())
       {
          if(s[i] !=t[j]  )
          {
            return false;
          }
          i++;
          j++;
       };

       return true;

       
        
        
    };
};
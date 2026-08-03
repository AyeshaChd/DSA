class Solution {
public:
    int firstUniqChar(string s) {
        queue<int>q;
         vector<int>v(26,0);
        for(int i=0;i<s.length();i++)
        {
            int ch=s[i];
            v[ch-'a']++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(v[s[i]-'a']==1) q.push(i);
           
        }
        if( !q.empty())
         return q.front();
    
     
       
      

     return -1;
    };
};
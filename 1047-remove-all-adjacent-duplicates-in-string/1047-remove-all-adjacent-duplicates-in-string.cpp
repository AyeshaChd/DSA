class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        stack<char>temp;
        string res="";
        for(int i=0; i<s.length();i++)
        {
            if(st.empty()|| s[i]!= st.top())
            {
                 st.push(s[i]);
                
            }
             else st.pop();
        };
        while(! st.empty()){
         temp.push(st.top());
         st.pop();
        }
        while( !temp.empty())
        {
 res+=temp.top();
 temp.pop();
        };
        return res;
    };
};
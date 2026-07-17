class Solution {
public:
    string removeStars(string s) {
      stack<char>st;
      string res="";
      for(int i=0;i<s.length();i++)  
      {
        if(s[i]!= '*') st.push(s[i]);
        if(s[i]=='*')
st.pop();      }
stack<char>temp;
while(!st.empty())
{
temp.push(st.top()) ;
st.pop();
}
while(! temp.empty()) {res+=temp.top(); temp.pop();}


  
return res;
    };
};
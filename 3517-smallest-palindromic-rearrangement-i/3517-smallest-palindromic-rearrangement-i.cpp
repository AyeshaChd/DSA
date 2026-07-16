class Solution {
public:
    string smallestPalindrome(string s) {
      
        if(s.size()==1 || s.size()== 2) return s;
        int m=s.size()/2;
        string half=s.substr(0,m);//half string generation
        cout<<"half:"<<half;
        sort(half.begin(),half.end());
        cout<<"halfsort:"<<half; 
        string rev=half; // reversal
        reverse(rev.begin(),rev.end());
         cout<<"rev:"<<rev; 
         cout<<"m:"<<m;
        if(s.size()%2==1) half+=s[m];  // m for even is simple but when m is send as index of s  as s[m] it shows middle of odd  // Appends middle character s[2] ('b') to half// append middle char as is if n is odd 
        return half + rev;   // concatenate
        
    }
};
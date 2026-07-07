class Solution {
public:
 bool isVowel(char c)
 {
    if(c == 'a' ||c == 'A' ||c == 'e' ||c == 'E' ||c == 'i' ||c == 'I' ||c == 'o' ||c == 'O' ||c == 'u' ||c == 'U' )
    {
        
        return true;
    }
    else return false;
 };
    string reverseVowels(string s) {
        int left=0; int right=s.size()-1;
        char temp ;
        while(left < right)
        {
            if(! isVowel(s[left])) left++;
           else if(! isVowel(s[right])) right--;
           else {
               temp= s[left];
               s[left]=s[right];
               s[right]= temp;
               left++;
               right--;
            };
            
        };

        return s;
    };
};
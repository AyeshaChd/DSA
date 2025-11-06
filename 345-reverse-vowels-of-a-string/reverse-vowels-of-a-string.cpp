class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int n=s.length();
        int right=n-1;
        int count=0;
        char temp;

        for(int i=0; i<s.length();i++)
        {

            if(left < right)
        {
            if (!( s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u' || s[left]=='A' || s[left]=='E' || s[left]=='I' || s[left]=='O' || s[left]=='U' ))
          {
            left++;
          
            count++;
            
          };
        
            if (!( s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u' || s[right]=='A' || s[right]=='E' || s[right]=='I' || s[right]=='O' || s[right]=='U' ))
          {
            right--;
            count++;
          };

         
         if( count == 0)
         {
            temp=s[left];
            s[left]= s[right];
            s[right]= temp;
            
            right--;
            left++;

         }

         count=0;


        };
        };
        return s;
    };
};
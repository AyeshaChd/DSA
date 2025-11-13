class Solution {
public:

 bool isVowel(char c)
        {
            c= tolower(c);
            if( c =='a' || c=='e'|| c=='i'|| c=='o'|| c=='u' )
            {
                return true;

            }
            else return  false;
        }
    string reverseVowels(string s) {
        // int left=0;
        // int n=s.length();
        // int right=n-1;
        // int count=0;
        // char temp;

       

        // for(int i=0; i<s.length();i++)
        // {

        //     if(left < right)
        // {
        //     if (!(isVowel(s[left])) )
        //   {
        //     left++;
          
        //     count++;
            
        //   };
        
        //     if (!(isVowel(s[right])))
        //   {
        //     right--;
        //     count++;
        //   };

         
        //  if( count == 0)
        //  {
        //     temp=s[left];
        //     s[left]= s[right];
        //     s[right]= temp;
            
        //     right--;
        //     left++;

        //  }

        //  count=0;


        // };
        // };
        // return s;
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(!(isVowel(s[i])))
            {
                i++;
            };
            if(!(isVowel(s[j])))
            {
                j--;
            };
            if( isVowel(s[i]) && isVowel(s[j]) )
            {
                swap( s[i], s[j]);
                i++;
                j--;
            }
        };
        return s;

    };
};
class Solution {
public:
bool isVowel(char c)
{
if( c =='a'|| c =='e'|| c =='i'|| c =='o'|| c =='u') return true;
else return false;
}
    int maxVowels(string s, int k) {
        int max_no=0;
        int count=0;
      for(int i=0;i<k;i++){
        
                 if(isVowel(s[i]))
                    count++;
                
      };
     
      max_no=count;
        for(int i=1;i<=s.size()-k;i++)
        {   
            if(isVowel(s[i-1])) count--;
             if(isVowel(s[i+k-1]))count++;
             if(count>max_no)  max_no=count; 
                
           
        };
        return max_no;
    };
};
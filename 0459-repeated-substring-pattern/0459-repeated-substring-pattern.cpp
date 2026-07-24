class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // string doubled=s+s;
        // string sub=doubled.substr(1,doubled.size()-2);
        // return sub.find(s)!=string::npos;
        // brute force
        int n=s.size();
        //1. Loop through every possible pattern length, up to half the string
        for (int len=1; len<= n/2; len++) 
        {  
          
            //2. Skip this length if it cannot fit evenly into the total string size.
            if(n%len != 0) continue;
            //3. Initialize an empty string container to build our test clone.
              string temp=""; 
             string substring=s.substr(0,len);
            // 4. Loop exactly enough times to rebuild a string of the original length.
             for(int i=0; i<n/len ;i++)
             {
                //5. Repeatedly append the pattern slice to build our test string.
                temp+=substring;
             };
            //6.If the fully built clone matches the original string, we found a pattern!
             if(temp==s)return true;
            // Finding divisors total work: O(√N)
// Building and comparing strings inside: O(N)
// Total Multiplied: O(N × √N) = O(N √N)


        };
        return false;

        
    };
};
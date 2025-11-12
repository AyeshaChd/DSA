class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int i = 0;
        int j=0;
        int m=0;
        int n= word1.length()+ word2.length();

        while (i < word1.length() && j < word2.length()) {
            merged.push_back(word1[i]);
            
           
            merged.push_back(word2[j]);
          
         i++;
         j++;
        };
        while( word1.length() < word2.length() && j<word2.length())
        {
            merged.push_back(word2[j]);
            j++;
        }
        while( word1.length() > word2.length() && i<word1.length())
        {
            merged.push_back(word1[i]);
            i++;
        }
     return merged;   
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int n=0;
       
       
        if(word1.size()>=word2.size()) n=word1.size();
       
        else n= word2.size();
        string ans;
         for(int i=0; i<n;i++)
         {    
            if(word1.size() < word2.size())
           {
           
            if( i < word1.size())
            { ans.push_back(word1[i]);
                 ans.push_back(word2[i]);
            }
            else{
                
            ans.push_back(word2[i]);
            };
           }; 
            if(word1.size()>word2.size())
           {
           
            if(i< word2.size())
            { ans.push_back(word1[i]);
                 ans.push_back(word2[i]);
            }
            else{
                
            ans.push_back(word1[i]);
            };
           };
            if(word1.size()==word2.size())
           {
           
            
             ans.push_back(word1[i]);
                 ans.push_back(word2[i]);
            
            

            };
            
         };
        return ans;
    };
};
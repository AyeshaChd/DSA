class Solution {
public:
   
    bool isPalindrome(string s) {

        // myapproach
//         vector<char> t;
       

//         for (int i = 0; i < s.length(); i++) {
//             if (isalnum(s[i])) { t.push_back(tolower(s[i]));
//             };
           
//         };
//          int left = 0;
//         int right = t.size() - 1;
    
//         while (left<right) {
//             if (t[left] != t[right])
//             {
//   return false;
//             }
                
          
//             left++;
//             right--;
//         };

//         return true;
// ----------optimized---------






int right=s.size()-1;
int left=0;
while(left<right)
{
    if(!isalnum(s[left])) // means keep iterating until we find alphanumeric numeric number
    { left++;
    continue;
    };
    if(!isalnum(s[right])) {right--;
    continue;};

    if(tolower(s[left])!=tolower(s[right])) return false;
    left++;
    right--;
};
return true;
    };
};
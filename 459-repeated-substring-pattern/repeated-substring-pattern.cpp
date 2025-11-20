class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        string doubled=s+s;
        string sub= doubled.substr(1,doubled.size()-2);
        // substr(a, b) creates a substring starting at index a and taking b characters.
        
        return sub.find(s)!=string::npos;
        // string::npos is a special constant in C++ that means:

// “Not found”
        
    }
};
class Solution {
public:
    bool isAlNum(char c) {
      
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9'))

            return true;
        else
            return false;
    }

    bool isPalindrome(string s) {
        if (s == " ")
            return true;
       
        vector<char> finals;
         int i = 0;
       
        int left = 0;
        int right = s.size() - 1;
        while (i < s.size() ) {
            if (isAlNum(s[i]))
                {finals.push_back(tolower(s[i])); }
             i++;
        }
         int k=0;;
         int j = finals.size() - 1;
        while (k < j) {
            if(finals[k] != finals[j]) return false;
            k++;
            j--;
        }
        ///// optimized if not want to use  space
        // while (left < right) {
        //     // inner while loops so left and right not cross each other
        //     while (left < right && !isAlNum(s[left]))
        //         left++;
        //     while (left < right && !isAlNum(s[right]))
        //         right--;

        //     if (tolower(s[left]) != tolower(s[right])) {
        //         return false;
        //     };

        //     left++;
        //     right--;
        // };

        return true;
    };
};

class Solution {
public:
    bool isAlNum(char c) {
          cout<<"bookkk"<<endl;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9'))
          
            return true;
        else return false;
    }

    bool isPalindrome(string s) {
        if (s == " ")
            return true;
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            // inner while loops so left and right not cross each other
            while (left < right && !isAlNum(s[left]))
                left++;
            while (left < right && !isAlNum(s[right]))
                right--;

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            };

            left++;
            right--;
        };
    
    return true;
};
}
;

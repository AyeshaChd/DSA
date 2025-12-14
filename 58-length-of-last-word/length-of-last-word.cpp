class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int lastword;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != 32) {
                count++;
                lastword = count;
            };
            if (s[i] == 32)

                count = 0;
        }
        return lastword;
    }
};
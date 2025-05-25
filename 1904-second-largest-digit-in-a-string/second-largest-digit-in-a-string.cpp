class Solution {
public:
    int secondHighest(string s) {
        int largest_number = -1;
    int second_largest = -1;

    for (int i = 0; i < s.length(); i++) {
        // Check if the character is a digit
        if (s[i] >= '0' && s[i] <= '9') {
            // Convert the character to an integer
            int digit = s[i] - '0';

            if (digit > largest_number) {
                second_largest = largest_number;
                largest_number = digit;
            } else if (digit < largest_number && digit > second_largest) {
                second_largest = digit;
            }
        }
    }

    return  second_largest;
}
};
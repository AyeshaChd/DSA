class Solution {
public:
    void reverseString(vector<char>& s) {

        int left=0;
        int n=s.size();
        int right= n-1;
        int temp=0;
        while(left< right)
        {
            temp=s[left];
            s[left]=s[right];
            s[right]= temp;

            left++;
            right--;
        }

       

        
    }
};
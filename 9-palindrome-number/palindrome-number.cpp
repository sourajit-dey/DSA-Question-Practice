class Solution {
public:
    bool isPalindrome(int x) {
       int original = x;
       long reversenum = 0;
       while ( x > 0) {
        int lastdigit = x % 10;
        x = x/10;
        reversenum = ( reversenum * 10) + lastdigit;

        
       }
       if (original == reversenum ) {
        return true;
       } else return false;
    }
};
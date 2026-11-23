class Solution {
public:
    int reverse(int x) {
        int count = 0;
        int reversenum = 0;
        while( x != 0) {
            int LastDigit = x % 10;
            x = x/10;
               
            if (reversenum > INT_MAX / 10 || (reversenum == INT_MAX / 10 && LastDigit > 7)) {
                return 0;
            }
            if (reversenum < INT_MIN / 10 || (reversenum == INT_MIN / 10 && LastDigit < -8)) {
                return 0;
            }
            reversenum = (reversenum * 10) + LastDigit; 
        }
        return reversenum;
    }
};
class Solution {
    public boolean isPalindrome(int x) {
    int compare = x;
       int reverseNumber = 0;
       while(x > 0) {
       int lastDigit = x % 10;
       x = x/10;
       reverseNumber = (reverseNumber * 10) + lastDigit;
       }
       if (reverseNumber == compare) {
        return true;
       } else return false;
    }
}
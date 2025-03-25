class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev, temp, rem;
        rev = 0;
        temp = x;
        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        return x == rev;
    }
};
// 9. Palindrome Number

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) { return false; }
        
        long int reverse  = 0;
        long int original = x;

        while (x > 0) {
            reverse *= 10;              // rev = rev * 10 = 0
            reverse += x % 10;          // rev = 0 + 312 % 10 = 2
            x /= 10;                    // x = 312 / 10 = 31
        }

        if (original == reverse) {
            return true;
        }
            
        return false;
    }
};
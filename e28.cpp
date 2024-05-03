#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleIndx = 0;
        int result = -1;
        for (int i = 0; i < haystack.length(); ++i) {
            if (haystack[i] == needle[needleIndx]) {
                if (needleIndx == 0) {
                    result = i;
                }
                needleIndx++;
                if (needleIndx == needle.length() - 1) {
                    return result;
                }
            } else {
                needleIndx = 0;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int strStr(string haystack, string needle) {
        int neddleIndx = 0;
        int result = -1;
        for (int i = 0; i < haystack.length(); ++i) {
            if (haystack[i] == needle[needleIndx]) {
                if (neddleIndx == 0) {
                    result = i;
                }
                neddleIndx++;
                if (neddleIndx == needle.length() - 1) {
                    return result;
                }
            } else {
                neddleIndx = 0;
            }
        }
        return -1;
    }
};
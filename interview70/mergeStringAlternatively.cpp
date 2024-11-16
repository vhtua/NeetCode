#include <iostream>

using namespace std;

class Solution {
public:
    string mergeAlternatively(string word1, string word2) {
        string result = "";
        int i = 0, j = 0;
        while (i < (int) word1.length() && j < (int) word2.length()) {
            result += word1[i];
            result += word2[j];
            i++;
            j++;
        }
        
        while (i < (int) word1.length()) {
            result += word1[i];
            i++;
        }

        while (j < (int) word2.length()) {
            result += word2[j];
            j++;
        }

        return result;
    }
};

int main(int argc, char const *argv[]) {
    string word1 = "abcd";
    string word2 = "pq";
    Solution s;
    cout << s.mergeAlternatively(word1, word2);
    return 0;
}

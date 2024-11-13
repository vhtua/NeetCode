#include <iostream>
#include <algorithm>    // min() function
#include <string>       // find() function
#include <unordered_map>

using namespace std;

class Solution {
    public:
        int maxNumberOfBalloons(string text) {
            string target = "balloon";
            unordered_map<char, int> umap;

            for (const char c : text) {
                if (target.find(c) != string::npos) {
                    umap[c]++;
                }
            }

            for (const char c : target) {
                if (umap.find(c) == umap.end()) {   // if not find the character in balloon
                    return 0;
                } 
            }

            return (int) min({umap['b'], umap['a'], (int) umap['l'] / 2, (int) umap['o'] / 2, umap['n']});
        }
};

int main() {
    // string text = "nlaebolko";
    string text = "loonbalxballpoon";
    Solution s;
    cout << s.maxNumberOfBalloons(text) << endl;
    return 0;
}
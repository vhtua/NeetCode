#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <utility>

using namespace std;

class Solution {
    public:
        bool isPossibleToSplit(vector<int> &nums) {
            unordered_map<int, int> u_map;
            for (int each : nums) {
                if (u_map[each] == 0) {
                    u_map[each] = 1;
                } else {
                    u_map[each]++; 
                }
            }

            for (auto it : u_map) {
                if (it.second > 2) {
                    return false;
                }
            }
            return true;
        }

        // enhance way (shorter) of using hash map
        bool isPossibleToSplit2(vector<int> &nums) {
            unordered_map<int,int> u_map;
            for (int n : nums) {
                u_map[n]++;
            }

            for (const pair<int, int> p : u_map) {
                if (p.second > 2) {
                    return false;
                }
            }

            return true;
        }

};

int main(int argc, char* argv[]) {
    // vector<int> v {1,1,2,2,3,4};
    vector<int> v {1,1,2,2,3,1,1,1};
    Solution s;
    string result = s.isPossibleToSplit(v) ? "True" : "False";
    string result2 = s.isPossibleToSplit2(v) ? "True" : "False";

    cout << result2 << endl;

    return 0;
}
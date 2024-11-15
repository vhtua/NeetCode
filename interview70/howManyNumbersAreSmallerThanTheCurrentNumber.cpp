#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums; 
        sort(temp.begin(), temp.end());
        vector<int> result {};
        unordered_map<int, int> m {};

        for (int i = 0; i < (int) temp.size(); ++i) {
            if (m.find(temp[i]) == m.end()) {
                m.insert({temp[i], i});
            }
        }

        for (int i = 0; i < (int) nums.size(); ++i) {
            result.push_back(m[nums[i]]);
        }

        return result;

    }

    void showVector(vector<int> &nums) {
            for (int each : nums) {
                cout << each << " ";
            }
    }
};

int main(int argc, const char** argv) {
    vector<int> v {8,1,2,2,3};
    Solution s;
    vector<int> result = s.smallerNumbersThanCurrent(v);
    s.showVector(result);
    return 0;
}
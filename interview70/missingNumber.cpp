#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int i = 0;
            for (; i < (int) nums.size(); ++i) {
                if (i != nums[i]) {
                    return i;
                }
            }
            return i;
        }
};

int main(int argc, char* argv[]) {
    // vector<int> v = { 1, 4, 0, 2 };
    vector<int> v = { 1, 0 };
    Solution s;
    cout << s.missingNumber(v) << endl;
    return 0;
}
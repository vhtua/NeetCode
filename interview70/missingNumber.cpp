#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            for (int i = 1; i < (int) nums.size(); ++i) {
                if (nums[i] > (nums[i - 1] + 1)) {
                    return nums[i - 1] + 1; 
                }
            }
            return nums.back() - 1;
        }

        // or we can use the differences between two sums;
};

int main(int argc, char* argv[]) {
    vector<int> v = { 1, 4, 0, 2 };
    Solution s;
    cout << s.missingNumber(v) << endl;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findClosetNumber(vector<int> &nums) {
        int result = nums[0];
        for (int i = 1; i < (int) nums.size(); ++i) {
            if (nums[i] == 0) {
                return 0;
            } else if (abs(nums[i]) < abs(result)) {
                result = nums[i];
            } else if (abs(nums[i]) == abs(result)) {
                result = nums[i] > result ? nums[i] : result;
            }
        }
        return result;
    }
};

int main(int argc, char const *argv[]){
    // vector<int> v = {-4,-2,1,4,8,-1};
    vector<int> v = {2, -1, 1};
    Solution s;
    cout << s.findClosetNumber(v);
    return 0;
}

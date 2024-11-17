#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum = 0.0;
        double sum = 0.0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        sum = sum;
        max_sum = sum;

        if (k == (int) nums.size()) {
            return max_sum / k;
        }

        for (int i = k; i < (int) nums.size(); ++i) {
            sum -= nums[i - k];
            sum += nums[i];
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
        return max_sum / k;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> v = {1,12,-5,-6,50,3}; int k = 4;
    // vector<int> v = {5}; int k = 1;
    Solution s;
    cout << s.findMaxAverage(v, k) << endl;
    return 0;
}

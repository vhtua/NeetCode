#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> m {};
            vector<int> result;
            int remainder;
            

            for (int i = 0; i < (int) nums.size(); ++i) {
                remainder = target - nums[i];
                if (m.find(remainder) == m.end()) {
                    m.insert({ nums[i], i });
                } 
                else {
                    result.push_back(m[remainder]);
                    result.push_back(i);
                }
            }

            return result;
        }

        void showVector(vector<int> &nums) {
            for (int each : nums) {
                cout << each << " ";
            }
        }
};


int main(int argc, char* argv[]) {
    vector<int> v = {2,7,11,15};
    int target = 9;
    Solution s;
    vector<int> result = s.twoSum(v, target);
    s.showVector(result);

    return 0;
}


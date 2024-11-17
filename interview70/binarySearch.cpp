#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        int l = 0;
        int r = (int) nums.size() - 1;
        int i = 0;

        while (l <= r) {
            int m = (int) (l + r) / 2;
            if (nums[m] == target) {
                return m;
            }
            else if (nums[m] > target) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
            
            i++;
        }

        return -1;
    }

    void showVector(vector<int> &nums) {
        for (int each : nums) {
            cout << each << " ";
        }
    }
};

int main(int argc, char* argv[]) {
    // vector<int> v = { 1,1,1,3,3,4,3,2,4,2 };
    vector<int> v = { -1,0,3,5,9,12 };
    int target = 9;
    Solution s; 
    cout << s.search(v, target) << endl;
    return 0;
}
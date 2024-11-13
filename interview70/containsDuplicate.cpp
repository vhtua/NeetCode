#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int> &nums) {
            set<int> s;
            for (int n : nums) {
                s.insert(n);
            }
            return nums.size() != s.size();
        }
};

int main(int argc, char* argv[]) {
    // vector<int> v = { 1,1,1,3,3,4,3,2,4,2 };
    vector<int> v = { 1, 2, 3, 4, 5, 6 };
    Solution s;
    string str = s.containsDuplicate(v) ? " False" : "False";
    cout << str << endl;
    return 0;
}
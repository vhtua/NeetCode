#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int> &nums) {
            set<int> numset {};
            vector<int> result {};
            
            for (int each : nums) {
                numset.insert(each);
            }

            for (int i = 1; i <= (int) nums.size(); ++i) {
                if (numset.find(i) == numset.end()) {
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
    vector<int> vct = {4,3,2,7,8,2,3,1};
    // vector<int> vct = {1,1};
    Solution s;

    vector<int> result = s.findDisappearedNumbers(vct);
    s.showVector(result);
    
    return 0;
}
// Problem: 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int length = nums.size();
        for (int i = 0; i < length; ++i) {
            if (nums[i] == nums[i - 1]) {
                k++;
            }
        }


        return k;
    }
};

void printVector(vector<int>& vect) {
    for (int i = 0; i < (int) vect.size(); ++i) {
        cout << vect[i] << " --- ";
    }
}

int main() {
    vector<int> vect = {1, 1, 2, 3, 4, 5, 5};
    printVector(vect);
    Solution s1;
    s1.removeDuplicates(vect);


}
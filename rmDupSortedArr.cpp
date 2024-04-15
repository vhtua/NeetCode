// Problem: 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length  = nums.size();
        int indx    = 1;

        for (int i = 1; i < length; ++i) {
            if (nums[i] != nums[i-1]) {
                nums[indx] = nums[i];
                indx++;
            }
        }
        
        return indx;
    }
};

void printVector(vector<int>& vect) {
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i] << " --- ";
    }
}

int main() {
    vector<int> vect = {1, 1, 2};
    printVector(vect);
    Solution s1;
    s1.removeDuplicates(vect);


}
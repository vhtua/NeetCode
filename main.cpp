// Problem: 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int length = nums.size();
        vector<int> newVect;
        newVect.push_back(nums[0]);
        for (int i = 1; i < length; ++i) {
            if (nums[i] != nums[i - 1]) {
                newVect.push_back(nums[i]);
            } else {
                k++;
            }
        }

        nums = newVect;
        return k;
    }

    int removeElement(vector<int>& nums, int val) {
        int indx;
        int length = nums.size();
        for (int i = 0; i < ) {
            
        }

        return indx;
    }
};

void printVector(vector<int>& vect) {
    for (int i = 0; i < (int) vect.size(); ++i) {
        cout << vect[i] << " --- ";
    }
    cout << endl;
}

int main() {
    vector<int> vect = {1, 1, 2};
    
    Solution s1;
    cout << s1.removeDuplicates(vect) << endl;
    printVector(vect);


}
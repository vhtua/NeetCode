#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    // 26. Remove Duplicates from Sorted Array
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

    // 27. Remove Element
    int removeElement(vector<int>& nums, int val) {
        int indx = 0;
        int length = nums.size();
        for (int i = 0; i < length; ++i) {
            if (nums[i] != val) {
                nums[indx] = nums[i];
                indx++; 
            }
        }

        return indx;
    }

    // 1929. Concatenation of Array
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        for (int i = 0; i < length; ++i) {
            nums.push_back(nums[i]);
        }
        return nums;
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
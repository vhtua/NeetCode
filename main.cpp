#include <iostream>
#include <vector>
#include <cstring>
#include <string>

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


    // 682. Baseball Game
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int sumScore = 0;
        int length = operations.size();

        for (int i = 0; i < length; ++i) {
            
            if (operations[i] == "+") {

            } else if (operations[i] == "C") {

            } else if (operations[i] == "D") {
                
            } else {
                
            }
        }

        return 0;
    }
};

void printVector(vector<int>& aVector) {
    for (int i = 0; i < (int) aVector.size(); ++i) {
        cout << aVector[i] << " --- ";
    }
    cout << endl;
}

int main() {
    vector<int> aVector = {1, 1, 2};
    
    Solution s1;
    cout << s1.removeDuplicates(aVector) << endl;
    printVector(aVector);


    vector<string> strVector = {"-2", "3", "D", "+", "+", "C"};
    s1.calPoints(strVector);



}
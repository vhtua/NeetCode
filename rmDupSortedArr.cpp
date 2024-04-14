// Problem: 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        return 0;
    }
};

void printVector(vector<int>& vect) {
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i] << " --- ";
    }
}

int main() {
    vector<int> vect = {1, 1, 2, 3, 4, 5, 5};
    printVector(vect);
    Solution s1;
    s1.removeDuplicates(vect);


}
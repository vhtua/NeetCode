#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int> merged;
        // int i1 = 0;
        // int i2 = 0;

        // if (m == 0) {
        //     nums1 = nums2;
        //     return;
        // }
        // if (n == 0) {       // the nums2 is empty, so keep the original nums1   
        //     return;
        // }

        // while (i1 < m && i2 < n) {
        //     if (nums1[i1] <= nums2[i2]) {
        //         merged.push_back(nums1[i1]);
        //         i1++;
        //     } else {
        //         merged.push_back(nums2[i2]);
        //         i2++;
        //     }
        // }

        // if (i1 == m) {
        //     for (int i = i2; i < n; ++i) {
        //         merged.push_back(nums2[i]);
        //     } 
        // }
        // if (i2 == n) {
        //     for (int i = i1; i < m; ++i) {
        //         merged.push_back(nums1[i]);
        //     } 
        // }

        // nums1 = merged;

        int index1 = m - 1;
        int index2 = n - 1;
        int merged_index = m + n - 1;

        while (index2 >= 0) {
            if (index1 >= 0 && nums1[index1] > nums2[index2]) {
                nums1[merged_index] = nums1[index1];
                merged_index--;
                index1--;
            } else {
                nums1[merged_index] = nums2[index2];
                merged_index--;
                index2--;

            }
        }


    }
};

int main() {

    return 0;
}
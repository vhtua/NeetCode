#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:    
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int result = 0;

        for (int i = 0; i < (int) points.size() - 1; ++i) {
            result += max(abs(points[i][0] - points[i + 1][0]), abs(points[i][1] - points[i + 1][1]));
        }

        return result;
    }
};

int main(int argc, const char** argv) {
    vector<vector<int>> points = {{1,1},{3,4},{-1,0}};
    // vector<vector<int>> points = {{3,2},{-2,2}};
    Solution s;
    cout << s.minTimeToVisitAllPoints(points);
    
    return 0;
}
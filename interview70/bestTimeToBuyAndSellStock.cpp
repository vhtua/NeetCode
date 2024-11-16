#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // using sliding window with 2 pointers approach
        int l = 0;  // l - left -> buy stock
        int max_profit = 0;
        int profit {};

        for (int r = 1; r < (int) prices.size(); ++r) {     // r - right -> sell stock
            profit = prices[r] - prices[l];
            if (profit > 0) {   
                max_profit = max(profit, max_profit);
            } 
            else {  // cause loss (or profit < 0) --> point to the next element which is smaller
                l = r;
            } 
        }

        return max_profit;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> stock = {7,1,5,3,6,4};
    // vector<int> stock = {7,6,4,3,1};
    Solution s;
    cout << s.maxProfit(stock);
    return 0;
}

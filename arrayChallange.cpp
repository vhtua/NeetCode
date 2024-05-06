#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> arrayChallange(vector<string> &strArr) {
    vector<string> result;
    result.push_back(strArr[0]);
    result.erase(result.begin());
    int strArrIndx = 0;
    int resultIndx = 0;
    int counter = 1;

    while (strArr.size() != 0) {
        if (strArr[strArrIndx] == result[resultIndx] || strArrIndx == strArr.size() - 1) {
            strArrIndx = 0;
        } else {
            strArrIndx++;
        }
    }

    return strArr;
}

void printArr(vector<string> &strArr) {
    for (int i = 0; i < (int) strArr.size(); ++i) {
        cout << strArr[i] << " -- ";
    }
    cout << endl;
}

int main() {
    // Implement cache array
    vector<string> strArr = {"A", "B", "A", "C", "A", "B"};
    vector<string> strArr2 = {"A", "B", "C", "D", "E", "D", "Q", "Z", "C"};
    vector<string> result = arrayChallange(strArr);
    vector<string> result2 = arrayChallange(strArr2);
    cout << "-- Test case #1 ---------------------------\n";
    printArr(result);
    cout << "-- Test case #2 ---------------------------\n";
    printArr(result2);
    return 0;
}
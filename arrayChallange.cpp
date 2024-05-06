#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> arrayChallange(vector<string> &strArr) {
    
    return 
}

void printArr(vector<string> &strArr) {
    for (int i = 0; i < (int) strArr.size(); ++i) {
        cout << strArr[i] << " -- ";
    }
}

int main() {
    vector<string> strArr = {"A", "B", "A", "C", "A", "B"};
    vector<string> result = arrayChallange(strArr);
    printArr(result);
    return 0;
}
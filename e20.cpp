#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // Space: O(n), Time: O(2n)

        std::stack<char> prChar; 
        // for (int i = 0; i < s.length(); ++i) {
        //     prChar.push(s[i]);
        // }
        int length = s.length();
        for (int i = 0; i < length; ++i) {
            if (s[0] == ')' || s[0] == ']' || s[0] == '}') {
                return false;
            } else if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                prChar.push(s[i]);
            } else {
                if (prChar.empty()) {
                    return false;
                } else if (prChar.top() == '(' && s[i] == ')' ) {
                    prChar.pop();
                } else if (prChar.top() == '[' && s[i] == ']') {
                    prChar.pop();
                } else if (prChar.top() == '{' && s[i] == '}') {
                    prChar.pop();
                } else {
                    return false;
                }
                
            }
        }

        if (!prChar.empty()) {
            return false;
        }

        return true; 
    }



    // bool isValid(string s) {
    //     stack<char> open;
    //     unordered_map<char, char> parens = {
    //         {')', '('},
    //         {']', '['},
    //         {'}', '{'},
    //     };
        
    //     for (const auto& c : s) {
    //         if (parens.find(c) != parens.end()) {
    //             // if input starts with a closing bracket.
    //             if (open.empty()) {
    //                 return false;
    //             }

    //             if (open.top() != parens[c]) {
    //                 return false;
    //             }

    //             open.pop();
    //         } else {
    //             open.push(c);
    //         }
    //     }
        
    //     return open.empty();
    // }
};
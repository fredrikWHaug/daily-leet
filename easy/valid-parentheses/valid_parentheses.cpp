#include <map>
#include <vector>
#include <stack>
class Solution {
public:
    bool isValid(string s) {

        stack<char> open_stack;
        std::map<char, char> p_map;
        p_map['('] = ')';
        p_map['{'] = '}';
        p_map['['] = ']';

        if (s[0] == ')' || s[0] == ']' || s[0] == '}') {
            return false;
        }

        for (int i = 0; i < s.length(); i ++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                open_stack.push(s[i]);
            } else {
                if (s[i] == p_map[open_stack.top()]) {
                    open_stack.pop();
                } else {
                    return false;
                }
            }
        }
        
        if (open_stack.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};
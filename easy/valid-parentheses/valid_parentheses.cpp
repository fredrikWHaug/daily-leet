#include <map>
#include <vector>
#include <stack>
class Solution {
public:
    bool isValid(string s) {

        stack<char> open_stack;
        vector<char> closed_vector;
        std::map<char, char> p_map;
        p_map['('] = ')';
        p_map['{'] = '}';
        p_map['['] = ']';

        for (int i = 0; i < s.length(); i ++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                open_stack.push(s[i]);
            } else {
                closed_vector.push_back(s[i]);
            }
        }

        for (int i = 0; i < open_stack.size(); i ++) {
            std::cout << open_stack.top() << std::endl;
            open_stack.pop();
        }

        for (int i = 0; i < open_stack.size(); i ++) {
            std::cout << closed_vector[i] << std::endl;
        }

        for (int i = 0; i < open_stack.size(); i ++) {
            if (closed_vector[i] == p_map[open_stack.top()]) {
                open_stack.pop();
            } else {
                return false;
            }
        }
        
        if (open_stack.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};

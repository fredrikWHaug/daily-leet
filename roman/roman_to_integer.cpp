#include <string>

class Solution {
public:
    int romanToInt(string s) {
        char string_split[s.size()]; 
    }
};

/*
Pseudo:
1. Create a hash map of all the 
romans and corresponding values
2. split up the insput string into 
characters
3. iterate over the splitte input and 
increment the output value by comparing
the symbol to the key:value in the hashmap
4. take the special cases into account by 
conditional statements
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {

        int result = 0;
        std::string special_character = "hi";
        for(int i = 0; i < s.size(); i++) {
            special_character[0] = s[i];
            special_character[1] = s[i+1];
            if(specialCheck(special_character)){
                specialNumber(special_character);
                i++;
            } else {
                if (s[i] == 'I'){
                    result ++;
                } else if (s[i] == 'V'){
                    result += 5;
                } else if (s[i] == 'X'){
                    result += 10;
                } else if (s[i] == 'L'){
                    result += 50;
                } else if (s[i] == 'C'){
                    result += 100;
                } else if (s[i] == 'D'){
                    result += 500;
                } else if (s[i] == 'M'){
                    result += 1000;
                }
            }
        }
        return result;
    }
    
    static int specialNumber(std::string s){
    if (s == "IV") {
        return 4;
    } else if (s == "IX") {
        return 9;
    } else if (s == "XL") {
        return 40;
    } else if (s == "XC") {
        return 90;
    } else if (s == "CD") {
        return 400;
    } else if (s == "CM") {
        return 900;
    } else {
        return 1;
    }
    }

    static bool specialCheck(std::string s){
    if (s == "IV" 
    || s == "IX"
    || s == "XL"
    || s == "XC"
    || s == "CD"
    || s == "CM"){
        return true;
    } else{
        return false;
    }
    }
};
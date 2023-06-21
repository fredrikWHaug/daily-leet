#include <string>

class Solution {
public:
    int romanToInt(std::string s) {

        int result = 0;

        for(int i = 0; i < s.size(); i ++) {
            char concat[2] ;
            concat[0] = s[0];
            concat[1] = s[1]; 

            if (s[i] == 'I') {
                if (specialCheck(concat)){
                    result += specialNumber(concat);
                } else {
                    result ++;
                }
            } else if (s[i] == 'V') {
                if (specialCheck(concat)){
                    result += specialNumber(concat);
                } else {
                    result += 5;
                }
            } else if (s[i] == 'X') {
                if (specialCheck(concat)){
                    result += specialNumber(concat);
                } else {
                    result += 10;
                }
            } else if (s[i] == 'L') {
                if (specialCheck(concat)){
                    result += specialNumber(concat);
                } else {
                    result += 50;
                }
            } else if (s[i] == 'C') {
                if (specialCheck(concat)){
                    result += specialNumber(concat);
                } else {
                    result += 100;
                }
            } else if (s[i] == 'D') {
                if (specialCheck(concat)){
                    result += specialNumber(concat);
                } else {
                    result += 500;
                }
            } else {
                result += 1000;
            }
            }
            return result;
        }

        static bool specialCheck(string s){
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

        static int specialNumber(string s){
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
    };













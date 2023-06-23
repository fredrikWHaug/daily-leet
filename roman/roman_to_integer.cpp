#include <string>

class Solution {
public:
    int romanToInt(std::string s) {

        int result = 0;
        std::string con;
        for(int i = 0; i < s.size(); ++i) {
            con[0] = s[i];
            con[1] = s[i+1]; 

            if (s[i] == 'I') {
                if (specialCheck(con)){
                    result += specialNumber(con);
                } else{
                    result ++;
                }
            } else if (s[i] == 'V') {
                if (specialCheck(con)){
                    result += specialNumber(con);
                } else {
                    result += 5;
                }
            } else if (s[i] == 'X') {
                if (specialCheck(con)){
                    result += specialNumber(con);
                } else {
                    result += 10;
                }
            } else if (s[i] == 'L') {
                if (specialCheck(con)){
                    result += specialNumber(con);
                } else {
                    result += 50;
                }
            } else if (s[i] == 'C') {
                if (specialCheck(con)){
                    result += specialNumber(con);
                } else {
                    result += 100;
                }
            } else if (s[i] == 'D') {
                if (specialCheck(con)){
                    result += specialNumber(con);
                } else {
                    result += 500;
                }
            } else if (s[i] == 'M'){
                result += 1000;
            } else {
                return 1;
            }
            }
            return result;
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
    };
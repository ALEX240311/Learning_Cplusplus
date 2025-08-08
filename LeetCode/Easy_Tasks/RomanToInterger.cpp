#include <iostream>
#include <unordered_map>

class Solution {
    public:
        int romanToInt(std::string s){
            std:: unordered_map<char,int> roman = {
                {'I',1},
                {'V',5},
                {'X',10},
                {'L',50},
                {'C',100},
                {'D',500},
                {'M',1000}
            };

            int res = 0;
            int c = s.length();

            for(int i = 0; i< c; i++){
                if(i + 1 < c && roman[s[i]] < roman[s[i+1]])
                {
                    res -= roman[s[i]];
                }
                else {
                    res += roman[s[i]];
                }
            }
            return res;
        }
};

int main() {
    Solution sol;
    std::cout << sol.romanToInt("III") << std::endl; // 3
    std::cout << sol.romanToInt("IV") << std::endl; // 4
    std::cout << sol.romanToInt("IX") << std::endl; // 9
    std::cout << sol.romanToInt("LVIII") << std::endl; // 58
    std::cout << sol.romanToInt("MCMXCIV") << std::endl; // 1994
}
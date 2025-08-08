#include<iostream>

class Solution{
    public :
        bool isPalindrome(int x){
        
            if(x<0)
            {
                return false;
            }

            int original = x, reserved = 0;  // Reserve valiable store Reserved Values
            while(x > 0)
            {
                int digit = x % 10;   //assumed x =123 then digit = 3 
                reserved = reserved * 10 + digit; // reserve = 0 * 10 + 3 = 3// if the next digit number is 2 then reserve = 3 * 10 +2 = 32
                x /= 10; // cut of the number at the back 123 -> 12
            }
            return original == reserved;
        }
};


int main(){
    Solution sol;
    std::cout << std::boolalpha; // Print bool values as true/false
    std::cout << sol.isPalindrome(121) << std::endl; // true
    std::cout << sol.isPalindrome(-121) << std::endl; // false
    std::cout << sol.isPalindrome(10) << std::endl; // false
}   
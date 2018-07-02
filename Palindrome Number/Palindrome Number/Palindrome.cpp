#include <iostream>
#include <string>
using namespace std;

class Solution {
    public :
        bool isPalindrome(string x) {
            int input = stoi(x);
            int temp = input;
            int rev = 0;

            while (temp != 0) {
                int pop = temp % 10;
                temp /= 10;
                rev = rev * 10 + pop;
            }

            if (rev == input) return true;
            else return false;
        }
};
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Solution {
    public :
        int reverse(string input) {
            int x = stoi(input);
            int rev = 0;

            if (x >= 0)										//當輸入大於等於零時的算法
            {
                while (x != 0) {
                    int pop = x % 10;
                    x /= 10;
                    rev = rev * 10 + pop;
                }

                return rev;
            }
            else													//當輸入為負數時的算法
            {
                int pos = abs(x);

                while (pos != 0) {
                    int pop = pos % 10;
                    pos /= 10;
                    rev = rev * 10 + pop;
                }

                return -rev;
            }
        }

};
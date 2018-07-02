#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Solution {
    public :
        int reverse(string input) {
            int x = stoi(input);
            int rev = 0;

            if (x >= 0)										//���J�j�󵥩�s�ɪ���k
            {
                while (x != 0) {
                    int pop = x % 10;
                    x /= 10;
                    rev = rev * 10 + pop;
                }

                return rev;
            }
            else													//���J���t�Ʈɪ���k
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
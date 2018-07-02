/*Reverse Integer*/
/*Given a 32-bit signed integer, reverse digits of an integer.*/

#include "Reverse Integer.cpp"
#include <regex>

int main()
{
    regex enter("^[-/(0-9)/+][0-9]*$");
    regex stop("(-[1])");
    Solution sol;
    string input;
    int ans = 0;
    bool isNum;

    while (true)
    {
        cout << "Please input Integer : " << endl;
        cin >> input;

        if (regex_match(input, stop))				//�P�_��J��-1�A�Y���_�{��
        {
            break;
        }
        else if (regex_match(input, enter))		//�P�_��J�ŦX�ɡA�}�l����Ʀr
        {
            ans = sol.reverse(input);
            cout << ans << endl;
        }
        else																//�P�_��J�����Ʀr�ɡA���s��J
        {
            cout << "This is not the correct input" << endl;
            continue;
        }
    }

    system("pause");
    return 0;
}

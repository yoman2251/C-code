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

        if (regex_match(input, stop))				//判斷輸入為-1，即中斷程式
        {
            break;
        }
        else if (regex_match(input, enter))		//判斷輸入符合時，開始反轉數字
        {
            ans = sol.reverse(input);
            cout << ans << endl;
        }
        else																//判斷輸入不為數字時，重新輸入
        {
            cout << "This is not the correct input" << endl;
            continue;
        }
    }

    system("pause");
    return 0;
}

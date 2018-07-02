/*Palindrome Number*/
/*Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.*/

#include "Palindrome.cpp"
#include <regex>

int main()
{
    regex enter("^[0-9]*$");
    regex stop("(-[1])");
    string input;
    bool ans;
    Solution sol;

    while (1)
    {
        cout << "Please input the Palindrome number : " << endl;
        cin >> input;

        if (regex_match(input, stop))						//當輸入-1時，程式中斷
        {
            break;
        }
        else if (regex_match(input, enter))				//當輸入為正整數時，丟入function判斷是否互文
        {
            ans = sol.isPalindrome(input);

            if (ans) cout << "true" << endl;
            else cout << "false" << endl;
        }
        else																		//當輸入不為正數時，直接判斷為false
        {
            cout << "false" << endl;
            continue;
        }
    }

    system("pause");
    return 0;
}
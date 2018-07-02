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

        if (regex_match(input, stop))						//���J-1�ɡA�{�����_
        {
            break;
        }
        else if (regex_match(input, enter))				//���J������ƮɡA��Jfunction�P�_�O�_����
        {
            ans = sol.isPalindrome(input);

            if (ans) cout << "true" << endl;
            else cout << "false" << endl;
        }
        else																		//���J�������ƮɡA�����P�_��false
        {
            cout << "false" << endl;
            continue;
        }
    }

    system("pause");
    return 0;
}
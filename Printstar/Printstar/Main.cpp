#include <iostream>
#include <math.h>

using namespace std;

int PrintUpperStar(int &input);			//印出上三角形(包含中線)
int PrintBottonStar(int &input);			//印出下三角形(不包含中線)

int main()
{
    int input = 0;

    while (1)
    {
        cout << "Please input an odd number : " << endl;
        cin >> input;

        if (input % 2 == 0)
        {
            cout << "Fucking error." << endl;
            continue;
        }
        else if (input > 9)
        {
            cout << "Fucking error." << endl;
            continue;
        }
        else
        {
            PrintUpperStar(input);
            PrintBottonStar(input);
        }
    }

    system ("pause");
    return 0;
}

int PrintUpperStar(int &input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < (input - i - 1) * 2; j++)
        {
            cout << "*";
        }

        int temp = 0;

        for (int k = 0; k < 4 * i + 1; k++)
        {
            if (k <= (4 * i + 1) / 2 + 1)
            {
                if (k % 2 == 0)
                {
                    temp = input - k / 2;
                    cout << temp;
                }
                else cout << "*";
            }
            else
            {
                if (k % 2 == 0)
                {
                    temp += 1;
                    cout << temp;
                }
                else cout << "*";
            }
        }

        for (int j = 0; j < (input - i - 1) * 2; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

int PrintBottonStar(int &input)
{
    for (int i = 0; i < input - 1; i++)
    {
        for (int j = 0; j < (i + 1) * 2; j++)
        {
            cout << "*";
        }

        int temp = 0;

        for (int k = 0; k < 4 * (input - i) - 7; k++)
        {
            if (k <= (4 * (input - i) - 7) / 2 + 1)
            {
                if (k % 2 == 0)
                {
                    temp = input - k / 2;
                    cout << temp;
                }
                else cout << "*";
            }
            else
            {
                if (k % 2 == 0)
                {
                    temp += 1;
                    cout << temp;
                }
                else cout << "*";
            }
        }

        for (int j = 0; j < (i + 1) * 2; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
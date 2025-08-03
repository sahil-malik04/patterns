#include <iostream>
using namespace std;

void print1()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 4 - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print2()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * 4 - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    print1();
    print2();
    return 0;
}
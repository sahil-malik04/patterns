#include <iostream>
using namespace std;

void print()
{
    int n = 5;
    int initS = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < initS; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        initS += 2;
    }

    initS = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < initS; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        initS -= 2;
    }
}

int main()
{
    print();
    return 0;
}
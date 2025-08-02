#include <iostream>
using namespace std;

void print()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    print();
    return 0;
}
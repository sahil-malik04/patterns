#include <iostream>
using namespace std;

void print()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    print();
    return 0;
}
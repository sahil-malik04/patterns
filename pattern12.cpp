#include <iostream>
using namespace std;

void print()
{
    int n = 5;
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

int main()
{
    print();
    return 0;
}
#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int x;
    cout << "Enter the value";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        print(y);
    }

    return 0;
}
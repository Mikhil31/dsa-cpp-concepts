#include <iostream>

using namespace std;

int main()
{
    int val, i = 1;
    cin >> val;

    while (i <= val)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
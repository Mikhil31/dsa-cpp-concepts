#include <iostream>

using namespace std;

int main()
{
    int val, i = 1;
    cin >> val;

    while (i <= val)
    {
        int j = val;
        while (j != 0)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}
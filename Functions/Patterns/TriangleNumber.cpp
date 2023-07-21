#include <iostream>
using namespace std;

int main()
{
    int val, i = 1;
    cin >> val;

    while (i <= val)
    {
        // i will be rows
        // j will be col
        int j = 1;
        while (j <= i * 2)
        {
            cout << j;

            j++;
        }
        cout << endl;
        i++;
    }
}
#include <iostream>

using namespace std;

int main()
{
    int i = 1, val;
    cin >> val;
    while (i <= val * val)
    {
        int j = val;
        while (j >= 1)
        {
            cout << i << "\t";
            j--;
            i++;
        }
        cout << endl;
    }
}
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int bin, ans = 0, i = 0;
    cin >> bin;

    while (bin != 0)
    {
        int temp = bin % 10;
        ans = (temp * pow(2, i)) + ans;
        bin = bin / 10;
        i++;
    }
    // int reverse;
    // ans is the bin form of the num
    cout << ans << endl;

    // while (ans != 0)
    // {
    //     int digit = ans % 10;
    //     if (reverse > INT16_MAX / 10 || reverse < INT16_MIN / 10)
    //     {
    //         break;
    //     }
    //     reverse = (reverse * 10) + digit;
    //     ans = ans / 10;
    // }
    // cout << reverse << endl;

    // convert to bin, then reverse it
}
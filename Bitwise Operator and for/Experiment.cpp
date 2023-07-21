#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 6;

    cout << "5>>1 " << (5 >> 1) << endl;
    // output: 2

    cout << "3>>2 " << (3 >> 2) << endl;
    // output: 0

    cout << "3>>1 " << (3 >> 1) << endl;
    // output: 1

    cout << "6>>1 " << (6 >> 1) << endl;
    // output: 3

    cout << "7>>1 " << (7 >> 1) << endl;
    // output: 3
}

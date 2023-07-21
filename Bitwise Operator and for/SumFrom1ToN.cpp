#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int sum = 0;

    for (int i = 0; i <= a; i++)
    {
        sum = sum + i;
    }
    cout << "sum is : " << sum << endl;
}
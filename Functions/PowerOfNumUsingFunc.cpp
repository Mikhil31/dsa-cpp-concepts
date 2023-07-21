#include <iostream>
using namespace std;
int power()
{
    int a, b, ans =1;
    cin >> a >> b;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "res is: " << ans << endl;
    return 0;
}

using namespace std;
int main()
{
    power();
}
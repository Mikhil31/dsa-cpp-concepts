// eg: in a and b, a=2 in bin = 10 and b=3 in bin =11
//  so set bits is 3

#include <iostream>
using namespace std;

int setBits(int a, int b)
{
    int setofa = 0, setofb = 0;
    while (a > 0)
    {
        // this will AND the last bit of a and 1 (so 0011&1=1 in iteration 1)
        // in iteration 01&1=1 so increments setofa..
        //&1 with one will only check with the last bit
        //  if we & with 15 it will convert both a and 15 to bin and AND
        //  so a>>1 is not needed
        if ((a & 1) == 1)
        {
            setofa++;
        }
        a = a >> 1;
    }

    while (b != 0)
    {
        if ((b & 1) == 1)
        {
            setofb++;
        }
        b = b >> 1;
    }
    return (setofa + setofb);
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << setBits(a, b) << endl;
}
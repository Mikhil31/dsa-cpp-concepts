#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    bool isPrime;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            cout << num << " / " << i << endl;
            break;
        }
        else
        {
            isPrime = true;
        }
    }
    cout << "\n"
         << (isPrime
                 ? "it is prime"
                 : "it's not prime")
         << endl;
}
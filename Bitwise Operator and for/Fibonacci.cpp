#include <iostream>
using namespace std;

// o:p = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, and 4181

int main()
{
    int arr[50];
    arr[0] = 0;
    arr[1] = 1;
    int num;
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (int i = 0; i <= num; i++)
    {
        cout << arr[i] << "\t";
    }
}
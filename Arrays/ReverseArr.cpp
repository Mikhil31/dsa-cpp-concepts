#include <iostream>
using namespace std;

// int reverseArr(){

// }

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6}, temp = 0;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    int start = 0, end = 5;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
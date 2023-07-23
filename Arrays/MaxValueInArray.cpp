#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 3, 62, 56, 26, 12, 27};
    int size = sizeof(arr) / sizeof(int);
    int max = 0, min = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }

    cout << "min value: " << min << endl;
    cout << "max value: " << max << endl;
}

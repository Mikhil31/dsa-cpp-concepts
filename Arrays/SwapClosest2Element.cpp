#include <iostream>
using namespace std;

int swapClosest2Elements(int arr[], int size)
{
    int j = 0, k = 1, l = 1, temp = 0;
    for (int i = 0; i < size; i++)
    {
        l = 1;
        while (l != 0)
        {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
            j = j + 2;
            k = k + 2;
            l = 0;
        }
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    swapClosest2Elements(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
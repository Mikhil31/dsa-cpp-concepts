#include <iostream>
#include <vector>

using namespace std;
int mid;

int binSearchLow(vector<int> arr, int key)
{
    int st = 0, end = arr.size() - 1;
    mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            st = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return -1;
}

int binSearchHigh(vector<int> arr, int key)
{
    int st = mid + 1, end = arr.size() - 1;
    int newMid = st + (end - st) / 2;

    while (st <= end)
    {
        if (key == arr[newMid])
        {
            return newMid;
        }
        if (key > arr[newMid])
        {
            st = newMid + 1;
        }
        if (key < arr[newMid])
        {
            end = newMid - 1;
        }
        newMid = st + (end - st) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 5, 5, 7, 7, 7};
    int key = 7;
    int first = binSearchLow(arr, key);
    int last = binSearchHigh(arr, key);
    cout << "1st occur: " << first << "\nlast occur: " << last << endl;
}
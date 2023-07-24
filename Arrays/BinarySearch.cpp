#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> arr, int key)
{
    int st = 0, end = arr.size() - 1, mid;
    mid = (end + st) / 2;
    while (st <= end)
    {
        if (arr[mid] == key)
        {
            cout << "in binSearch func, key found" << endl;
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
        mid = (st + end) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr;
    int n, num, key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    cout << "key: " << endl;
    cin >> key;
    int res = binSearch(arr, key);

    if (res == -1)
    {
        cout << "key not found";
    }
    else
    {
        cout << "key at index: " << res << endl;
    }
}
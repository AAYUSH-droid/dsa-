#include <iostream>
using namespace std;

int print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

bool binarySearch(int *arr, int s, int e, int key)
{
    cout << endl;
    print(arr, s, e);

    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    cout << "value of arr[mid] is " << arr[mid] << endl;

    if (arr[mid] == key)
    {
        return true;
    }

    // int mid = s + (e-s)/2;
    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
    int size = 11;
    int key = 222;

    int ans = binarySearch(arr, 2, 10, key);
    cout << endl;

    if (ans)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    cout << endl
         << endl;
    return 0;
}
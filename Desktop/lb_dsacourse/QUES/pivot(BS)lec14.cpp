#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[8] = {11, 12, 15, 18, 2, 5, 6, 8};
    cout << "Pivot is " << getPivot(arr, 8) << " ";
    return 0;
}
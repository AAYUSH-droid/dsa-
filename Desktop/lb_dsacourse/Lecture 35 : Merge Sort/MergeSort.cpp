#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy value from original array (s to mid part) to len1(first) array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    //copy value from original array(mid+1 to e part) to len2(second) array
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    //merge the two (first and second) array to the final new sorted array
    int index1 = 0;
    int index2 = 0;
    //k = mainArrayIndex
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    //left part sort krna h
    mergeSort(arr, s, mid);

    //right part sort krna h
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{

    int arr[8] = {200, 5, 19, 16, 910, 20, 14, 9870};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Merge Sort is a Divide and Conquer algorithm.
//It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.

//SC-O(n);
//TC-O(nlogn);
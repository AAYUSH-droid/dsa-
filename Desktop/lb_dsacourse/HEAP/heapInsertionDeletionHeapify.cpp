// TC for insertion -> O(logn)
#include <bits/stdc++.h>

using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {

        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }

            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletefromHeap()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }

        // step1: put last element into first index
        arr[1] = arr[size];

        // step2: remove last element
        size--;

        // step3: take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

// for max heap(1 based indexing)
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // t->arr.size()
    int size = n;
    while (size > 1)
    {
        // step1: swap root element with last element
        swap(arr[size], arr[1]);
        size--;
        // step2
        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout << "printing insertion: " << endl;
    h.print();

    h.deletefromHeap();
    cout << "printing deletion: " << endl;
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    cout << "Given array: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // heap creation
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "array after heapify algo" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // heap sort
    heapSort(arr, n);

    cout << "printing sorted array" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Using priority queue " << endl;

    // max-heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout << "Element at top: " << pq.top() << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(1);
    minHeap.push(100);
    minHeap.push(5);
    minHeap.push(20);
    cout << "Element at top of minHeap is: " << minHeap.top() << endl;

    return 0;
}

//--------****----------------****----------------****----------------****--------
// for min heap(0 based indexing)
//  void heapify(vector<int> &arr, int n, int i)
//  {
//      int smallest = i;
//      int left = 2 * i + 1;
//      int right = 2 * i + 2;
//      if (left < n && arr[smallest] > arr[left])
//      {
//          smallest = left;
//      }
//      if (right < n && arr[smallest] > arr[right])
//      {
//          smallest = right;
//      }
//      if (smallest != i)
//      {
//          swap(arr[smallest], arr[i]);
//          heapify(arr, n, smallest);
//      }
//  }
//  vector<int> buildMinHeap(vector<int> &arr)
//  {
//      int n= arr.size();
//      for (int i=n/2 - 1; i >= 0; i--)
//      {
//          heapify(arr, n, i);
//      }
//      return arr;
//  }

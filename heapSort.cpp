#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void max_heapify(int (&arr)[10], int i, int heapSize)
{

    int left = 2*i + 1;
    int right = 2*i + 2;
    int largest = i;
    
    if(i < heapSize)
    {

    if(left < heapSize && arr[i] < arr[left]) largest = left;

    if(right < heapSize && arr[right] > arr[largest]) largest = right;

    if(i != largest) 
    {
    swap(arr[i], arr[largest]);
    

    max_heapify(arr, largest, heapSize);
    }

    }
}

void build_MaxHeap(int (&arr)[10])
{
    int heapSize = sizeof(arr)/sizeof(arr[0]);

    for(int i = (sizeof(arr)/sizeof(arr[0]))/2 - 1; i >= 0; i--)
    {
        max_heapify(arr, i, heapSize);
    }

}

void heap_sort(int (&arr)[10])
{
    build_MaxHeap(arr);
    
    int heap_Size = sizeof(arr) / sizeof(arr[0]);
    for(int i = heap_Size - 1; i >= 0; i--)
    {

    swap(arr[0], arr[i]);
    max_heapify(arr, 0, i);
    
    }
}

int main()
{
    int arr[10];
    
    cout << "Input 10 array elements: " << endl;
    for(int i = 0; i < 10; i++)
    cin >> arr[i];

    heap_sort(arr); 

    cout << endl;
    for(int i = 0; i < 10; i++)
    cout << arr[i] << endl;

    return 0;
}


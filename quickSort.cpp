#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int (&arr)[10], int p, int r)
{
    int p1 = p - 1;
    int p2 = p;
    int elem = arr[r];
    for(; p2 < r; p2++)
    {
        if(arr[p2] < elem) 
        {
            swap(arr[p1 + 1], arr[p2]);
            p1++;
        }
    }
    swap(arr[p1 + 1], arr[r]);
    return p1 + 1;
}

void quick_sort(int (&arr)[10], int p, int r)
{
    if(p < r)
    {
        int q = partition(arr, p, r);
        quick_sort(arr, p, q - 1);
        quick_sort(arr, q + 1, r);
    }
}

int main()
{
    int arr[10];
    cout << "Input 10 elements: " << endl;
    for(int i= 0; i< 10; i++)
    cin >> arr[i];

    int p, r;
    cout << "Enter the indices to sort the array between :" << endl;
    cin >> p >> r;

    quick_sort(arr, p, r);

    cout << endl;
    for(int i = 0; i < 10; i++)
    cout << arr[i] << endl;
}
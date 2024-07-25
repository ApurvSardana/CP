#include <bits/stdc++.h>
using namespace std;

int arr[10];

int partition1(int p, int r)
{
    int pivot = arr[r];
    int i = p - 1;
    int temp = 0;

    for(int j = p; j < r; j++)
    {
        if(arr[j] <= pivot)
        {
            i = i + 1;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;  
        }
    }

    arr[r] = arr[i + 1];
    arr[i + 1] = pivot;
    return i + 1;
}

void quick_sort(int p, int r)
{
    if(p < r)
    {
        int q = partition1(p, r);
        quick_sort(p, q - 1);
        quick_sort(q + 1, r);
    }
}

int main()
{
    for(int i = 0; i < 10; i++)
    cin >> arr[i];

    cout << "Enter the indices to sort the array between: " << endl;

    int p, r;
    cin >> p >> r;

    quick_sort(p, r);

    for(int i = 0; i < 10; i++)
    cout << arr[i] << endl;

    return 0;
}
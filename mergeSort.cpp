#include <bits/stdc++.h>
using namespace std;
void merge(int (&arr)[10], int p, int mid, int r)
{
    int n1 = mid - p + 1;
    int n2 = r - mid;

    int larr[n1];
    int rarr[n2];

    for(int i = 0; i < n1; i++)
    {
        larr[i] = arr[i + p];
    }

    for(int i = 0; i < n2; i++)
    {
        rarr[i] = arr[i + mid + 1];
    }

    int i, j; i = j = 0;
    int k = p;
    while(i < n1 && j < n2)
    {
        if(larr[i] <= rarr[j])
        arr[k++] = larr[i++];

        if(rarr[j] < larr[i])
        arr[k++] = rarr[j++];
    }

    
        while(j < n2)
        arr[k++] = rarr[j++];
    

    
        while(i < n1)
        arr[k++] = larr[i++];
    

}

void merge_sort(int (&arr)[10], int p, int r)
{
    if(p < r)
    {
        int mid = (p + r) / 2;
        merge_sort(arr, p, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, p, mid, r);
    }
}

int main()
{
    int arr[10];
    cout << "Input 10 elements :" << endl;
    for(int i = 0; i < 10; i++)
    cin >> arr[i];

    int p, r; p = r = 0;
    cout << "Enter the indices to sort the array between: " << endl;
    cin >> p >> r;

    merge_sort(arr, p, r);

    cout << endl;
    for(int i = 0; i < 10; i++)
    cout << arr[i] << endl;
}
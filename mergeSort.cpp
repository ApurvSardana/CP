#include <bits/stdc++.h>
using namespace std;

int arr[10];

void merge1(int p1, int cen, int q1)
{
    const int n1 = cen - p1 + 1;
    const int n2 = q1 - cen;
    int larr[n1];
    int rarr[n2];

    for(int i = 0; i < n1; i++)
    larr[i] = arr[i + p1];

    for(int i = 0; i < n2; i++)
    rarr[i] = arr[i + cen + 1];

    int i, j;
    int k = p1;
    i = j = 0;

    while(i < n1 && j < n2)
    {
    if(larr[i] <= rarr[j])
    {
    arr[k] = larr[i];
    i++;
    k++;
    }
    else
    {
        arr[k] = rarr[j];
        j++;
        k++;
    }
    }

    
        while(i < n1)
        {
            arr[k++] = larr[i];
            i++;
        }
    
    
        while(j < n2)
        {
            arr[k++] = rarr[j];
            j++;
        }


}

void merge_sort(int p, int q)
{
    
    int cen = 0;

    if(p < q)
    {
        cen = (p + q) / 2;
        merge_sort(p, cen);
        merge_sort(cen + 1, q);
        merge1(p, cen, q);
    }
    else 
    return;

}

int main()
{

for(int i = 0; i <= 9 ; i++)
cin >> arr[i];

int p, q;
cout << "Enter the indices to sort the array between " << endl;
cin >> p >> q; 

merge_sort(p, q);

for(int i = 0; i < 10; i++)
cout << arr[i] << endl;

return 0;

}
// #include <bits/stdc++.h>
// using namespace std;

// int arr[10];

// // Merges two subarrays of arr[].
// // First subarray is arr[p1..cen]
// // Second subarray is arr[cen+1..q1]
// void merge1(int p1, int cen, int q1) {
//     const int n1 = cen - p1 + 1;
//     const int n2 = q1 - cen;
//     vector<int> larr(n1);
//     vector<int> rarr(n2);

//     for (int i = 0; i < n1; i++)
//         larr[i] = arr[p1 + i];

//     for (int i = 0; i < n2; i++)
//         rarr[i] = arr[cen + 1 + i];

//     int i = 0, j = 0, k = p1;
//     while (i < n1 && j < n2) {
//         if (larr[i] <= rarr[j]) {
//             arr[k] = larr[i];
//             i++;
//         } else {
//             arr[k] = rarr[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy the remaining elements of larr[], if there are any
//     while (i < n1) {
//         arr[k] = larr[i];
//         i++;
//         k++;
//     }

//     // Copy the remaining elements of rarr[], if there are any
//     while (j < n2) {
//         arr[k] = rarr[j];
//         j++;
//         k++;
//     }
// }

// void merge_sort(int p, int q) {
//     if (p < q) {
//         int cen = p + (q - p) / 2;
//         merge_sort(p, cen);
//         merge_sort(cen + 1, q);
//         merge1(p, cen, q);
//     }
// }

// int main() {
//     cout << "Enter 10 elements of the array:" << endl;
//     for (int i = 0; i < 10; i++)
//         cin >> arr[i];

//     int p, q;
//     cout << "Enter the indices to sort the array between (0-based index):" << endl;
//     cin >> p >> q;

//     if (p >= 0 && q < 10 && p <= q) {
//         merge_sort(p, q);
//     } else {
//         cout << "Invalid indices." << endl;
//         return 1;
//     }

//     cout << "Sorted array:" << endl;
//     for (int i = 0; i < 10; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

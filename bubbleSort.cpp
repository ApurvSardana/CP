#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[10];
    cout << " Input 10 elements :" << endl;
    for(int i = 0; i < 10; i++)
    cin >> arr[i];

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 9 - i; j++)
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);

    for(int i = 0; i < 10; i++)
    cout << arr[i] << endl;       
        
return 0;
}
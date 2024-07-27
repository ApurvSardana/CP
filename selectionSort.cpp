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
    cout << "Input 10 elements: " << endl;
    for(int i = 0; i < 10; i++)
    cin >> arr[i];

    int minIndex;
    int minElement;;
    for(int i = 0; i < 10; i++)
    {
        minIndex = i;
        minElement = arr[i];
        for(int j = i + 1; j < 10; j++)
        {
            if(arr[j] < minElement)
            {
            minElement = arr[j];
            minIndex = j;
            }
        }
        if(minIndex != i) swap(arr[i], arr[minIndex]); 
    } 

    cout << endl;
    for(int i = 0; i < 10; i++)
    cout << arr[i] << endl;
}
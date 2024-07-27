#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    cout << "Input 10 elements :" << endl;
    for(int i = 0; i < 10; i++)
    cin >> arr[i];

    for(int i = 1; i < 10; i++)
    {
        int currentElement = arr[i];
        int j = i - 1;
        for(; j >= 0 && arr[j] > currentElement; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = currentElement;
    }

    cout << endl;
    for(int i = 0; i < 10; i++)
    cout << arr[i] << endl;
}
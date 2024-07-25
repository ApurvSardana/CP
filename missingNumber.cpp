#include <iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    int* arr = new int[n - 1];
    for(int i = 0; i < n - 1; i++) // accepting array elements
    {
        cin >> arr[i];
    }

    //Insertion sort
    for(int j = 1; j < n - 1; j++)
    {
        int key  = arr[j];
        int i = j - 1;
        while(i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[++i] = key;
    }
    
    for(int i = 1; i <= n; i++)
    {
        if(i != arr[i - 1] || i == n){
            
            cout << i ;
            break;
        }
        else{
            continue;
        }
    }

delete[] arr;

}
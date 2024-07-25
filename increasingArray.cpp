#include <iostream>
using namespace std;
main()
{
    long int n;
    long int count = 0;
    long int diff = 0;
    cin >> n;
    int* arr = new int[n];
    for(long int i = 0; i < n; i++){
    cin >> arr[i];
    }
    for(long int i = 1; i < n;i++)
    {
        diff = arr[i - 1] - arr[i];
       while(diff > 0)
       {
        ++arr[i];
        
        count++;
    diff--;
       }
    }
    cout << count;
}
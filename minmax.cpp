#include <bits/stdc++.h>
using namespace std;

void minmaxi(int arr[], int i, int j, int &maxf, int &minf)
{
    
    if(i == j) 
    {
        minf = maxf = arr[i];
    }

    if(i == j - 1)
    {
    if(arr[i] < arr[j])
    {
        minf = arr[i];
        maxf = arr[j];
    }
    else 
    {
        minf = arr[j];
        maxf = arr[i];
    }
    }
    else if(j - i > 1)
    {
        int min1, max1;
        int mid = (i + j) / 2;
    
    minmaxi(arr, i, mid, maxf, minf);
    minmaxi(arr, mid + 1, j, max1, min1);

    if(maxf < max1) maxf = max1;
    

    if(minf > min1) minf = min1;
    
    }
}
int main()
{
    int minf, maxf;
    int arr[10];
    for(int i = 0; i < 10; i++)
    cin >> arr[i];

    minmaxi(arr, 0, 9, maxf, minf);

cout << minf << " " << maxf << endl;

    


}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = n;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            n /= i;

            ans = ans - ans/i;
        }
    }
    if(n > 1) 
    ans = ans - ans/n;
    cout << ans << endl;
    return 0;
}
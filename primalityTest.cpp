#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve()
{
    long int n;
    cin >> n;
    if(n == 1)
    cout << "no" << endl;
for(long int i = 2;(i * i) <= n; i++)
{
    if(n % i == 0)
    {
        cout << "no" << endl;
        return;
    }
    
}
cout << "yes" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
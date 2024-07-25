#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FOR(i, a, b) for(int i = a;i < b;i++)
#define FORk(i, a, b, k) for(int i = a;i < b;i += k)
#define RFOR(i, a, b) for(int i = a; i >= b; i--)
#define RFORk(i, a, b, k) for(int i = a; i >= b; i -= k)
#define pb push_back
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vll;
typedef vector<ull> vull;


void solve()
{
    vi prs;
    prs.pb(0);
    
const int n = 100000;
bool arr[ n + 1];
FOR(i, 2, n + 1)
arr[i] = true;

for(int i = 2; i*i <= n; i++)
if(arr[i])
FORk(j, i*i, n + 1, i)
arr[j] = false;

FOR(i, 2, n + 1){
    if(arr[i])
    prs.pb(i);
}


for(int i = 2; i <= n; i++)
{
    cout << i << ": ";
    for(int j = 1; prs[j] <= i; j++)
    if(i % prs[j] == 0)
    cout << prs[j] << " ";

    cout << endl;
}


}
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

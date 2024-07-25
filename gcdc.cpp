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
// const int MOD = 10e9 + 7;

const int maxi = 100000;

    vi arr(maxi + 1);
    static int p = 1;
    vi sum(maxi + 1);
    vi farr(maxi + 1);


void solve()
{
int n;
cin >> n;


cout << "Case " << p << ": " << farr[n] << endl;
 
}
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
    int t = 1;
    cin >> t;

    
    FOR(i, 0, maxi + 1)
    arr[i] = i;


    FOR(i, 2, maxi + 1)
    {
        if(arr[i] == i)
        {
            FORk(j, i, maxi + 1, i)
            arr[j] = arr[j] - arr[j]/i;
        }
    }
    sum[0] = sum[1] = 0;

    FOR(i, 2, maxi + 1)
{
    sum[i] = sum[i] + (i - arr[i]);
}

farr[0] = farr[1] = 0;
FOR(i, 2, maxi + 1)
{
farr[i] = farr[i - 1] + sum[i];
}
    
    for(p = 1; p < t + 1; p++)
    {
        solve();
    }
    return 0;
}

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
    
long int a, b, c;
cin >> a >> b >> c;
if(c % __gcd(a,b) == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
    long int t = 1;
    cin >> t;
    for(long int i = 1; i <= t; i++)
    {
        cout << "Case " << i <<": ";
        solve();
    }
    return 0;
}

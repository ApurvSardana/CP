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

void ext_gcd(int A, int B, int C, int &x, int &y)
{
if(B == 0)
{
    x = 1;
    y = 0;
}
else
{
int x0, y0;
ext_gcd(B, A%B, C, x0, y0);
x = y0;
y = x0 - (A/B)*y0;
}
}

void solve()
{
int a, b, c, g = 0;
int x = 0, y = 0;
cin >> a >> b >> c;
g = __gcd(a, b);
if(a > b)
ext_gcd(a, b, c, x, y);
else
ext_gcd(b, a, c, y, x);
if(c % g == 0)
{
    int x1 = (c/g)*x;
    int y1 = (c/g)*y;
    int ulimit = (x1/(int)(b/g)) - 1;
    int llimit = (-1)*ceil(y1/(int)(a/g)) + 1;
    int count = ulimit - llimit + 1;
    cout << count << endl;
    FOR(i, llimit, ulimit + 1)
    {
    
        cout << x1 - (b/g)*i << " " << y1 + (a/g)*i << endl;
    }
}
else
cout << 0 << endl;
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

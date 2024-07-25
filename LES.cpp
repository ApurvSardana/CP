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

int ex_gcd(int a, int b, int &x, int &y)
{
if(b == 0)
{
    x = 1; 
    y = 0; //y could be anything 
    return a;
}
else
{
int x0, y0;
int p = ex_gcd(b, a%b, x0, y0);
x = y0;
y = x0 - (a/b)*y0;
return p;
}
}

void solve()
{
    static int i = 1;
int a, b, x = 0, y = 0, c, g = 0;
cin >> a >> b >> c;
if(a > b)
g = ex_gcd(a, b, x, y);
else
g = ex_gcd(b, a, y, x);
if(c%g == 0)
cout << "Case " << i++ << ": " << "x = " << (c/g) * x <<" y = " << (c/g) * y << endl;
else
cout << "Case " << i++ << ": No Solution exists" << endl;
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

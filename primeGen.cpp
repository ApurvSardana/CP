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

const int maxl = 31624;
bool pr[maxl];
bool p[100001];
vi prs;


void sieve(){
FOR(i, 2, maxl + 1)
pr[i] = true;
for(int i = 2; i*i <= maxl; i++)
if(pr[i])
FORk(j, i*i, maxl + 1, i)
pr[j] = false;

FOR(i, 2, maxl + 1)
if(pr[i])
prs.pb(i);
}

void seg_sieve(int a, int b)
{
    int x = 0;
FOR(i, 0, b - a + 1)
p[i] = true;
 if(a == 1) p[0] = false;
 int sm = sqrt(b);
for(auto i : prs)
{
    if(i > sm)
    break;
x = (a/i) * i;
if(x < a)
x = x + i;
if(x < i*i)
x = i*i;

FORk(j, x, b + 1, i)
p[j - a] = false;


}
FOR(i, 0 , b - a + 1)
if(p[i])
cout << i + a << endl;



}


void solve()
{
    int n, m;
    cin >> m >> n;
    seg_sieve(m, n);
    cout << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
    int t = 1;
    cin >> t;
    sieve();
    while(t--)
    {
        solve();
    }
    return 0;
}

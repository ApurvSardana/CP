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

int n;
vi arr;

int phi()
{
    int p;
cin >> p;
int ans = p;
for(int i = 2; i*i <= p; i++)
{
    if(p % i == 0)
    {
        while(p % i == 0)
        p /= i;
        ans = ans - ans/i;
    }
}
if(p > 1)
ans = ans - ans/p;
return ans;
}

void solve()
{
    int count = 0;
int l, r;
cin >> l >> r;
int j = 2;
FOR(i, l - 1, r)
{
    if(arr[i] == 1)
    continue;
    
    for(j = 2; j*j <= arr[i]; j++)
    if(arr[i] % j == 0)
    break;

if(j*j > arr[i])
count++;
}
cout << count << endl;

}



int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
     int t;
     int count = 0;
      cin >> n >> t;
      
      while(n--)
    arr.pb(phi());

    
    
    while(t--)
    {
        solve();
    }
    return 0;
}

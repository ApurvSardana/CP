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

int sieve(int n)
{
    int count = 0;

bool arr[n + 1];
arr[0] = arr[1] = false;
for(int i = 2; i < n + 1; i++)
arr[i] = true;

for(int i = 2; i*i <= n; i++)
if(arr[i])
FORk(j, i*i, n + 1, i)
arr[j] = false;



FOR(i, 2, n + 1)
if(arr[i] && arr[i] != n)
count++;

return count;

}

int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
    int n;
cin >> n;
int ans = sieve(n);
cout << ans << endl;
    return 0;
}

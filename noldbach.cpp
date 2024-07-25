#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FOR(i, a, b) for(int i = a;i < b;i++)
#define FORk(i, a, b, k) for(int i = a;i < b;i += k)
int n;
int k;
bool* arr;
vector<int> prs;
void sieve()
{
arr = new bool[n + 1];
FOR(i, 2, n + 1)
arr[i] = true;
FOR(i, 2, n + 1)
if(arr[i])
FORk(j, i*i, n + 1, i)
arr[j] = false;

prs.push_back(0);
FOR(i, 2,n + 1)
if(arr[i])
prs.push_back(i);

}
void solve()
{
    int count = 0;

FOR(i, 2, prs.size())
{
int sum = 1 + prs[i] + prs[i - 1];
if(sum <= n && arr[sum])
count++;
}
if(count >= k)
cout << "YES" << endl;
else{
cout << "NO" << endl;
}
delete[] arr;
}
int main()
{
    cin >> n >> k;
    ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
    int t = 1;
    // cin >> t;
    sieve();
    while(t--)
    {
        solve();
    }
    return 0;
}

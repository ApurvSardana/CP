#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FOR(i, a, b) for(int i = a;i < b;i++)
#define FORk(i, a, b, k) for(int i = a;i < b;i += k)
int n;

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
    FOR(i, 2, n + 1)
    if(arr[i])
    prs.push_back(i);
}


void solve()
{
    sieve();
    int ans = 0;
FOR(i, 1, n + 1)
{
    int count = 0;
    FOR(j, 1, prs.size())
    {
        if(prs[j] > i / 2) break;
        if(i%prs[j] == 0)
        count++;
        if(count > 2) break;
    }
    if(count == 2)
ans++;
}
cout << ans << endl;
delete[] arr;

}
int main()
{
    
cin >> n;
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

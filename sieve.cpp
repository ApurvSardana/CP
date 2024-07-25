#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FOR(i, a, b) for(long long i = (a);i < (b);i++)
#define FORk(i, a, b, k) for(long long i = (a);i < (b);i += k)

const long long N = 86028121;
    bool pr[N + 1];
    vector<int> prs;
void sieve()
{
    FOR(i, 2, N + 1)
    pr[i] = true;
    FOR(i, 2, N + 1)
    if(pr[i])
    FORk(j, i*i, N+1, i)
    pr[j] = false;

    prs.push_back(3);
    FOR(i, 2, N + 1)
if(pr[i]){
prs.push_back(i);
}

}
void solve()
{
    int k;
    cin >> k;
    cout << prs[k] << endl;
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

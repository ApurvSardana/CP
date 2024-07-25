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
const int MOD = 1e9 + 7;


void solve()
{
    long long count = 0;
    int n;
    cin >> n;
    int arr[n];
    FOR(i, 0, n)
    cin >> arr[i];

    FOR(i, 1, n)
    {
        if(arr[i] == 1 && arr[i] < arr[i - 1])
        {
            cout << -1 << endl;
            return;
        }

        if(arr[i] >= arr[i - 1])
        continue;

        if(arr[i] < arr[i - 1] && arr[i] != 1)
        {
            while(arr[i] < arr[i - 1])
            {
                arr[i] = arr[i] * arr[i];
                count++;
            }
        }
    }
    cout << count << endl;

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
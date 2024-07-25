#include <iostream>
using namespace std;
main()
{
    long int n;
    cin >> n;
    long int ans = 0;
    while(n >= 5)
    {
        n /= 5;
        ans += n;
    }
    cout << ans << endl;

}

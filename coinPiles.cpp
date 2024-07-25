#include <iostream>
using namespace std;
main()
{
    int t;
    cin >> t;
    long int a, b;
    a = b = 0;
    while(t > 0)
    {
     cin >> a;
     cin >> b;
     
     if((a + b) % 3 != 0){
     cout << "NO" << endl;}
     else if ((a > 2*b) || (b > 2*a))
     {
        cout << "NO" << endl;
     }
     else{
     cout << "YES" << endl;}
     t--;
     
    }
}


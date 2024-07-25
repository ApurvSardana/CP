#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
string str;
cin >> str;
long int l = str.length();
int* count = new int[l];
if(l % 2 == 0)
{
for(long int i =  0;i < l - 1;i++)
{
    for(long int j = i + 1; j < l;j++)
    {
        if(str[i] == str[j])
        count[i]++;
    }
    if(count[i] % 2 != 0)
    {
        cout << "NO SOLUTION";
        break;
    }
    else
    {
        
    }
}

}
// else{

// }
return 0;
}
// int main()
// {
//     ios_base::sync_with_stdio(false);
//      cin.tie(NULL); 
//      cout.tie(NULL);
//     int t = 1;
//    // cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
main()
{
long int n;
cin >> n;
if(n != 2 && n != 3){
if(n % 2 == 0)
{
for(int i = 2; i <= n; i+=2)
{
    cout << i << " ";
}
for(int i = 1;i <= n - 1;i+=2)
{
    cout << i << " ";
}
}
else
{
for(int i = 1;i <= n;i+=2)
{
    cout << i << " ";
}
    for(int i = 2; i <= n - 1; i+=2)
{
    cout << i << " ";
}

}
}

else
{
    cout << "NO SOLUTION";
}
}



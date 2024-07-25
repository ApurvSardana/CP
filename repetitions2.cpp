#include <iostream>
#include <string>
using namespace std;
main() {
    string str;
    cin >> str;

    long int n = str.length();

    int long count = 1; 
    int long finalCount = count;

    for (long int i = 1; i < n; i++) {
        if (str[i] == str[i - 1]) {
            count++;
            if (count > finalCount) {
                finalCount = count;
            }
        } else {
            count = 1;
        }
    }
    cout << finalCount << endl;
}
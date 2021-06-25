#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n;
    string res;
    cin >> n;
    res = to_string(n);
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        res += ' ' + to_string(n);
    }
    cout << res;
    return 0;
}
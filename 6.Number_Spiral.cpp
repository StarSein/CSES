//
// Created by Yuseong Hwang on 2021-06-29.
//
#include <iostream>

using namespace std;

int main()
{
    int t, y, x;
    typedef long long LL;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> y >> x;
        if (y >= x) {
            if (y & 1)
                cout << (LL) (y - 1) * (y - 1) + x << endl;
            else
                cout << (LL) y * y - x + 1 << endl;
        }
        else {
            if (x & 1)
                cout << (LL) x * x - y + 1 << endl;
            else
                cout << (LL) (x - 1) * (x - 1) + y << endl;
        }
    }
    return 0;
}

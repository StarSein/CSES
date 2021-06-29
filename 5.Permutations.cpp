//
// Created by Yuseong Hwang on 2021-06-29.
//
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n) {
        case 2: case 3:
            cout << "NO SOLUTION";
            break;
        case 4:
            cout << "2 4 1 3";
            break;
        default:
            cout << 1;
            for (int i = 3; i <= n; i += 2)
                cout << ' ' << i;
            for (int i = 2; i <= n; i += 2)
                cout << ' ' << i;
            break;
    }
    return 0;
}
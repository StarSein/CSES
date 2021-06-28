#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, num;
    cin >> n;
    vector <bool> checkNum (n + 1, false);
    checkNum[0] = true;
    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        checkNum[num] = true;
    }
    for (int i = 0; i < n + 1; i++) {
        if (!checkNum[i]) {
            cout << i;
            break;
        }
    }
    return 0;
}
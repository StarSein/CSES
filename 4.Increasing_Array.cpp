//
// Created by Yuseong Hwang on 2021-06-29.
//
#include <iostream>
#include <vector>

using namespace std;

typedef long long LL;

int main()
{
    int n, max;
    LL move = 0;

    cin >> n;
    vector <int> nums (n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    max = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] < max)
            move += max - nums[i];
        else
            max = nums[i];
    }
    cout << move;
    return 0;
}
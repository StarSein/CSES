//
// Created by Yuseong Hwang on 2021-06-29.
//
#include <iostream>
#include <string>
using namespace std;

int max(int a, int b);

int main()
{
    char latest;
    int cnt = 1, res = 1;
    string dna;
    getline(cin, dna);
    latest = dna[0];
    for (int i = 1; i < dna.size(); i++){
        if (dna[i] == latest)
            cnt++;
        else {
            latest = dna[i];
            res = max(res, cnt);
            cnt = 1;
        }
    }
    res = max(res, cnt);
    cout << res;
    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
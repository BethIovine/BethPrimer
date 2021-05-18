#include "Chapter6.h"
#include <iostream>

using namespace std;

int fact(int val) {
    if (val == 0 || val == 1) return val;
    return val * fact(val - 1);
}

int func() {
    int n, ret = 1;
    cout << "Please enter a number:" << endl;
    cin >> n;
    while (n > 1) ret *= n--;
    return ret;
}
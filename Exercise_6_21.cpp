#include <iostream>
#include<vector>

using namespace std;

int large_one_6_21(const int i, const int *const p) {
    return i > *p ? i : *p;
}

int main_6_21() {
    int i = 10, j = 9;
    cout << large_one_6_21(i, &j) << endl;

    return 0;
}
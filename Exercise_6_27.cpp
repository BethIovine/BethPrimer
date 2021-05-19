#include <iostream>

using namespace std;

int initList_sum_6_27(const initializer_list<int> &il) {
    int sum = 0;

    for (auto i:il) {
        sum += i;
    }

    return sum;
}

int main_6_27() {
    initializer_list<int> a = {1, 2, 3, 4, 5, 6, 7};

    cout << initList_sum_6_27(a) << endl;

    return 0;
}
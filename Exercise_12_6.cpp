#include "Exercise_12_2.h"

vector<int> *get_da_vector_12_6() {
    return new vector<int>{};
}

auto enlarge_vector_12_6(vector<int> *v) {
    int i;
    while (cin >> i) v->push_back(i);
    return v;
}

int main_12_6() {
    auto vec = enlarge_vector_12_6(get_da_vector_12_6());
    for (auto i:*vec) cout << i << endl;

    return 0;
}
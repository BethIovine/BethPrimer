#include "Exercise_12_2.h"

shared_ptr<vector<int>> get_shared_vector_12_7() {
    return make_shared<vector<int>>();
}

auto enlarge_vector_12_7(shared_ptr<vector<int>> v) {
    int i;
    while (cin >> i) v->push_back(i);
    return v;
}

int main_12_7() {
    auto vec = enlarge_vector_12_7(get_shared_vector_12_7());
    for (auto i:*vec) cout << i << endl;

    return 0;
}
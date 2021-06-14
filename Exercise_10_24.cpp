#include <iostream>
#include <vector>

using namespace std::placeholders;
using namespace std;

bool check_size_10_24(const string &str, size_t sz) {
    return str.size() <= sz;
}

int main_10_24() {
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7};
    string str("aabbcc");

    auto size = count_if(vec.cbegin(), vec.cend(), bind(check_size_10_24, str, _1));
    cout << size << endl;

    return 0;
}
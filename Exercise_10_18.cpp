#include <iostream>
#include <vector>

using namespace std;

void remove_dup_10_18(vector<string> &vec) {
    sort(vec.begin(), vec.end());
    auto new_end = unique(vec.begin(), vec.end());
    vec.erase(new_end, vec.end());
}

void biggies_10_18(vector<string> &vec, size_t sz) {
    remove_dup_10_18(vec);

    auto cur = partition(vec.begin(), vec.end(), [sz](const string &s) {
        return s.size() >= sz;
    });

    for_each(vec.begin(), cur, [](const string &str) {
        cout << str << " ";
    });
}

int main_10_18() {
    vector<string> strs{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    biggies_10_18(strs, 4);

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void remove_dup_10_19(vector<string> &vec) {
    stable_sort(vec.begin(), vec.end());

    for (auto it = vec.cbegin(); it != vec.cend(); ++it) cout << *it << "  ";
    cout << endl;

    auto new_end = unique(vec.begin(), vec.end());
    vec.erase(new_end, vec.end());

    for (auto it = vec.cbegin(); it != vec.cend(); ++it) cout << *it << "  ";
    cout << endl;
}

void biggies_10_19(vector<string> &vec, size_t sz) {
    remove_dup_10_19(vec);

    auto cur = stable_partition(vec.begin(), vec.end(), [sz](const string &s) {
        return s.size() >= sz;
    });

    for (auto it = vec.cbegin(); it != cur; ++it) cout << *it << "  ";
    cout << endl;
}

int main_10_19() {
    vector<string> strs{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    biggies_10_19(strs, 4);

    return 0;
}
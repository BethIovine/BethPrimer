#include <iostream>
#include <vector>

using namespace std;

void remove_dup_10_16(vector<string> &vec) {
    sort(vec.begin(), vec.end());
    auto new_end = unique(vec.begin(), vec.end());
    vec.erase(new_end, vec.end());
}

void biggies_10_16(vector<string> &vec, size_t sz) {
    remove_dup_10_16(vec);

    stable_sort(vec.begin(), vec.end(), [](const string &str1, const string &str2) {
        return str1.size() < str2.size();
    });

    auto cur = find_if(vec.begin(), vec.end(), [sz](const string &str) {
        return str.size() >= sz;
    });

    for_each(cur, vec.end(), [](const string &str) {
        cout << str << " ";
    });
}

int main_10_16() {
    vector<string> vec{"1234", "1234", "1234", "hi~", "alan", "alan", "cp"};

    biggies_10_16(vec, 3);

    return 0;
}
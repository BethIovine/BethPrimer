#include <iostream>
#include <forward_list>

using namespace std;

void remove_odds_9_27(forward_list<int> &flist) {
    auto is_odd = [](int i) { return (i & 1); };
    flist.remove_if(is_odd);
}

int main_9_27() {
    forward_list<int> data{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    remove_odds_9_27(data);
    for (auto i:data) cout << i << endl;

    return 0;
}
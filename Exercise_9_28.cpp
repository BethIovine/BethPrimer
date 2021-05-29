#include <iostream>
#include <forward_list>

using namespace std;

void find_and_insert_9_28(forward_list<string> &list, const string &to_find, const string &to_add) {
    auto prev = list.before_begin();
    for (auto cur = list.begin(); cur != list.end(); prev = cur++) {
        if (*cur == to_find) {
            list.insert_after(cur, to_add);
            return;
        }
    }
    list.insert_after(prev, to_add);
}

int main_9_28() {
    forward_list<string> data{"1", "2", "3", "4", "5", "6", "7", "8"};
    find_and_insert_9_28(data, "9", "add");
    for (auto &s:data) cout << s << endl;

    return 0;
}
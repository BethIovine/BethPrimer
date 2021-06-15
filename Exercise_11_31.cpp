#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main_11_31() {
    multimap<string, string> authors{
            {"a", "1"},
            {"a", "2"},
            {"b", "3"},
            {"b", "4"},
            {"c", "5"},
            {"d", "6"}
    };

    const string del_author = "a";
    const string del_book = "2";
    auto count = authors.count(del_author);
    auto cur = authors.find(del_author);

    while (count) {
        if (del_book == cur->second) {
            authors.erase(cur);
            break;
        }
        --count;
        ++cur;
    }

    for (const auto &kv:authors) cout << "author : " << kv.first << " , book : " << kv.second << endl;

    return 0;
}
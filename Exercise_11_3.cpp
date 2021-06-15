#include <iostream>
#include <map>

using namespace std;

int main_11_3() {
    string str;
    map<string, size_t> m;
    while (cin >> str && str != "EOF") {
        m[str]++;
    }
    for (auto &kv:m) {
        cout << kv.first << " occurs " << kv.second << " times" << endl;
    }

    return 0;
}
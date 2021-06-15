#include <iostream>
#include <map>
#include <vector>
#include <list>

using namespace std;

int main_11_12() {
    vector<pair<string, int>> vec;
    string str;
    int i;
    while (cin >> str && str != "EOF" && cin >> i) {
        vec.push_back(pair<string, int>(str, i));
    }

    for (auto &kv:vec) {
        cout << kv.first << " : " << kv.second << endl;
    }

    return 0;
}
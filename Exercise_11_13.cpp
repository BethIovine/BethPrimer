#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main_11_13() {
    vector<pair<string, int>> vec;
    string str;
    int i;
    while (cin >> str && str != "EOF" && cin >> i) {
        //vec.emplace_back(str, i);
        //vec.push_back(make_pair(str,i));
        //vec.push_back({str,i});
        vec.push_back(pair<string, int>(str, i));
    }

    for (auto &kv:vec) {
        cout << kv.first << " : " << kv.second << endl;
    }

    return 0;
}
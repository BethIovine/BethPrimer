#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main_11_20() {
    map<string, size_t> counts;
    for (string word; cout << "Please enter a word:" << endl && cin >> word && word != "EOF";) {
        auto res = counts.insert({word, 1});
        if (!res.second) {
            ++res.first->second;
        }
    }

    for (const auto &kv:counts) cout << kv.first << " occurs " << kv.second << " times." << endl;

    return 0;
}
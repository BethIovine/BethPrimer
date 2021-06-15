#include <iostream>
#include <map>
#include <vector>

using namespace std;

auto make_families_11_14() {
    map<string, vector<pair<string, string>>> families;
    for (string ln; cout << "Family name:\n", cin >> ln && ln != "EOF";)
        for (string cn, bi;
             cout << "|-Children's names and birthday:\n", cin >> cn && cn != "EOF" && cin >> bi && bi != "EOF";)
            families[ln].push_back({cn, bi});
    return families;
}

void print_11_14(const map<string, vector<pair<string, string>>> &m) {
    for (const auto &kv:m) {
        cout << "Family name : " << kv.first << " . Children's name and birthday including: ";
        const auto &cn = kv.second;
        for (const auto &kv:cn) cout << "(name is " << kv.first << " and birthday " << kv.second << " .) ";
        cout << endl;
    }
}

int main_11_14() {
    map<string, vector<pair<string, string>>> m = make_families_11_14();
    print_11_14(m);

    return 0;
}
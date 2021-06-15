#include <iostream>
#include <map>
#include <vector>

using namespace std;

auto make_families_11_7() {
    map<string, vector<string>> families;
    for (string ln; cout << "Family name:\n", cin >> ln && ln != "EOF";)
        for (string cn; cout << "|-Children's names:\n", cin >> cn && cn != "@EOF";)
            families[ln].push_back(cn);
    return families;
}

void print_11_7(const map<string, vector<string>> &m) {
    for (const auto &kv:m) {
        cout << "Family name : " << kv.first << " . Children's name including: ";
        const vector<string> &cn = kv.second;
        for (auto s:cn) cout << s << "  ";
        cout << endl;
    }
}

int main_11_7() {
    int a = 1;
    int &b = a;

    map<string, vector<string>> m = make_families_11_7();
    print_11_7(m);

    return 0;
}
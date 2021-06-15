#include <iostream>
#include <map>

using namespace std;

bool is_punct(int i) {
    return i == ',' || i == '.';
}

const string &strip(string &str) {
    for (auto &c:str) c = tolower(c);
    str.erase(remove_if(str.begin(), str.end(), is_punct), str.end());
    return str;
}

int main_11_4() {
    string str;
    map<string, size_t> m;
    while (cin >> str && str != "EOF") {
        m[strip(str)]++;
    }
    for (auto &kv:m) {
        cout << kv.first << " occurs " << kv.second << " times" << endl;
    }

    return 0;
}
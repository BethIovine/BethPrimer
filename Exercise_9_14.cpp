#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main_9_14() {
    list<char *> l = {"Dan", "Zhen", "Ming Z"};
    vector<string> v(l.begin(), l.end());
    for (const auto &s:v)cout << s << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main_10_37() {
    vector<int> vec;
    list<int> li;
    for (int i = 1; i < 11; ++i) {
        vec.push_back(i);
    }

    copy(vec.crbegin() + 3, vec.crbegin() + 8, back_inserter(li));

    for (auto i:li) cout << i << "  ";
    cout << endl;

    return 0;
}
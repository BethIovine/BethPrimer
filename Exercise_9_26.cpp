#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main_9_26() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v(begin(ia), end(ia));
    list<int> l(begin(ia), end(ia));

    for (auto iter = v.begin(); iter != v.end();) {
        if ((*iter & 1) == 0) iter = v.erase(iter);
        else ++iter;
    }

    for (auto iter = l.begin(); iter != l.end();) {
        if ((*iter & 1) != 0) iter = l.erase(iter);
        else ++iter;
    }

    for (auto i:v) cout << "vector: " << i << endl;
    for (auto i:l) cout << "list: " << i << endl;
    return 0;
}
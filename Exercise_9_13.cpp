#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main_9_13() {
    list<int> l = {1, 2, 3, 4, 5, 6};
    vector<int> v = {7, 8, 9, 10, 11, 12};

    vector<double> v2(l.begin(), l.end());
    vector<double> v3(v.cbegin(), v.cend());

    for (auto a:v2) cout << a << endl;
    for (auto a:v3) cout << a << endl;

    return 0;
}
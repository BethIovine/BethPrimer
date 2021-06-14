#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main_10_27() {
    vector<int> vec{1, 1, 2, 3, 4, 5, 7, 7, 7, 7, 8};
    list<int> li;

    unique_copy(vec.cbegin(), vec.cend(), back_inserter(li));
    for (auto i:li) cout << i << "  ";
    cout << endl;

    return 0;
}
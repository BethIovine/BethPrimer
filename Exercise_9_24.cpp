#include <iostream>
#include <vector>

using namespace std;

int main_9_24() {
    vector<int> v1{1, 2, 3, 4, 5, 6};
    vector<int> v2;

    cout << v1.at(0) << endl;
    cout << v1[0] << endl;
    cout << v1.front() << endl;
    cout << *v1.begin() << endl;
    cout << "********************" << endl;
    cout << boolalpha << (v2.begin() == v2.end()) << endl;
    cout << "********************" << endl;
    cout << v2.at(0) << endl;
    cout << v2[0] << endl;
    cout << v2.front() << endl;
    cout << *v2.begin() << endl;

    return 0;
}
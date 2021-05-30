#include <iostream>
#include <vector>

using namespace std;

int main_9_41() {
    vector<char> v{'m', 'u', 's', 'e', 'u', 'm'};
    char a[6] = {'m', 'u', 's', 'e', 'u', 'm'};

    string str1(v.cbegin(), v.cend());
    string str2(begin(a), end(a));

    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
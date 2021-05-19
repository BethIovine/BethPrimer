#include <iostream>
#include <vector>

using namespace std;
using iter = vector<int>::const_iterator;

string make_plural(size_t cnt, const string &word, const string &ending = "s") {
    return cnt > 1 ? word + ending : word;
}

int main_6_42() {
    cout << "1 dollar right format is : " << make_plural(1, "dollar") << endl;
    cout << "3 dollar right format is : " << make_plural(3, "dollar") << endl;

    return 0;
}
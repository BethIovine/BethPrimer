#include <iostream>
#include <fstream>
#include <istream>
#include <vector>

using namespace std;

int main_10_29() {
    ifstream ifs("../chapter8/Sales_item.txt");
    istream_iterator<string> in(ifs), eof;
    vector<string> vec;

    copy(in, eof, back_inserter(vec));

    for (auto &s:vec) cout << s << " * ";
    cout << endl;

    return 0;
}
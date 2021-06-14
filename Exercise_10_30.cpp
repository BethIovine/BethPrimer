#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main_10_30() {
    istream_iterator<int> eof;
    vector<int> vec(std::istream_iterator<int>(cin), eof);
    sort(vec.begin(),vec.end());
    copy(vec.cbegin(), vec.cend(), ostream_iterator<int>(cout, " "));

    return 0;
}
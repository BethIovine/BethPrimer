#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main_10_31() {
    istream_iterator<int> eof;

    vector<int> vec(std::istream_iterator<int>(cin), eof);
    sort(vec.begin(), vec.end());
    unique_copy(vec.cbegin(), vec.cend(), ostream_iterator<int>(cout, " "));

    return 0;
}
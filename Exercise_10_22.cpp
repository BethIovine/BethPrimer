#include <iostream>
#include <vector>

using namespace std::placeholders;
using namespace std;

bool isLesserThanOrEqualTo6(const string &s, string::size_type sz) {
    return s.size() <= sz;
}

int main_10_22() {
    std::vector<string> authors{"Mooophy", "pezy", "Queequeg90", "shbling", "evan617"};
    auto a = bind(isLesserThanOrEqualTo6, _1, 6);
    std::cout << count_if(authors.cbegin(), authors.cend(), a);
}
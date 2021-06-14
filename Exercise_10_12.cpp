#include <iostream>
#include <vector>
#include "Sales_data_ch7.h"

using namespace std;

inline bool compareIsbn_10_12(const Sales_data_ch7 &lhs, const Sales_data_ch7 &rhs) {
    return lhs.isbn().size() < rhs.isbn().size();
}

inline void sort_sales_data_10_12(vector<Sales_data_ch7> &vec) {
    sort(vec.begin(), vec.end(), compareIsbn_10_12);
}

int main_10_12() {
    Sales_data_ch7 d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
    vector<Sales_data_ch7> v{d1, d2, d3, d4, d5};

    sort_sales_data_10_12(v);

    for (auto &item:v) cout << item.isbn() << "  ";
    cout << endl;


    return 0;
}
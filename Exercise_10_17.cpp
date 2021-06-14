#include <iostream>
#include <vector>
#include "Sales_data_ch7.h"

using namespace std;

int main_10_17() {
    Sales_data_ch7 d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
    vector<Sales_data_ch7> v{d1, d2, d3, d4, d5};

    sort(v.begin(), v.end(), [](const Sales_data_ch7 &item1, const Sales_data_ch7 &item2) {
        return item1.isbn().size() < item2.isbn().size();
    });

    for (auto &item:v) {
        cout << item.isbn() << endl;
    }

    return 0;
}
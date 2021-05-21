#include <iostream>
#include "Sales_data_ch7.h"

using namespace std;

int main_7_13() {
    Sales_data_ch7 total(cin);

    if (!total.isbn().empty()) {
        istream &is = cin;
        while (is) {
            Sales_data_ch7 trans(is);
            if (!is) break;
            if (total.isbn() == trans.isbn())
                total = add(total, trans);
            else {
                print(cout, total);
                total = trans;
            }
        }
        print(cout, total);
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}
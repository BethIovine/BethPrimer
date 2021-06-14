#include <iostream>
#include "Sales_data_ch7.h"

using namespace std;


int main_7_3() {
    Sales_data_ch7 total;
    if (read(cin, total)) {
        Sales_data_ch7 trans;
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
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
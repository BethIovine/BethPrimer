#include <iostream>
#include "Sales_data_ch7.h"

using namespace std;


int main_7_3() {
    Sales_data_ch7 total;
    if (cin >> total.bookNo >> total.unit_sold >> total.revenue) {
        Sales_data_ch7 trans;
        while (cin >> trans.bookNo >> trans.unit_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}
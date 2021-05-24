#include "Sales_data_ch7.h"

Sales_data_ch7 &Sales_data_ch7::combine(const Sales_data_ch7 &rhs) {
    this->unit_sold += rhs.unit_sold;
    this->revenue += rhs.revenue;

    return *this;
}

istream &read(istream &is, Sales_data_ch7 &item) {
    double price = 0.0;

    is >> item.bookNo >> item.unit_sold >> price;
    item.revenue = item.unit_sold * price;

    return is;
}

ostream &print(ostream &os, const Sales_data_ch7 &item) {
    os << item.bookNo << "  " << item.unit_sold << "  " << item.revenue;
    return os;
}

Sales_data_ch7 add(const Sales_data_ch7 &item1, const Sales_data_ch7 &item2) {
    Sales_data_ch7 sum = item1;

    sum.combine(item2);

    return sum;
}

inline double Sales_data_ch7::avg_price() const {
    return unit_sold ? (revenue / unit_sold) : 0;
}
//Sales_data_ch7::Sales_data_ch7(istream &is) {
//    read(is, *this);
//}
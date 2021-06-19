#include "Exercise_14_2.h"

Sales_data_12_23::Sales_data_12_23(istream &is) : Sales_data_12_23() {
    is >> *this;
}

Sales_data_12_23 &Sales_data_12_23::operator+=(const Sales_data_12_23 &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &operator>>(istream &is, Sales_data_12_23 &item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    if (is)
        item.revenue = price * item.units_sold;
    else
        item = Sales_data_12_23();
    return is;
}

ostream &operator<<(ostream &os, const Sales_data_12_23 &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data_12_23 operator+(const Sales_data_12_23 &lhs, const Sales_data_12_23 &rhs) {
    Sales_data_12_23 sum = lhs;
    sum += rhs;
    return sum;
}

Sales_data_12_23 &Sales_data_12_23::operator=(const string &str) {
    *this = Sales_data_12_23(str);
    return *this;
}

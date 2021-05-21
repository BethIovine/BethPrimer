
#ifndef BETHPRIMER_SALES_DATA_CH7_H
#define BETHPRIMER_SALES_DATA_CH7_H

#include <string>
#include <iostream>

using namespace std;

class Sales_data_ch7;


class Sales_data_ch7 {
    friend istream &read(istream &is, Sales_data_ch7 &item);

    friend ostream &print(ostream &os, const Sales_data_ch7 &item);

    friend Sales_data_ch7 add(const Sales_data_ch7 &item1, const Sales_data_ch7 &item2);

public:

    Sales_data_ch7() = default;

    Sales_data_ch7(const string &isbn) : bookNo(isbn) {};

    Sales_data_ch7(const string &isbn, unsigned n, double p) : bookNo(isbn), unit_sold(n), revenue(n * p) {};

    Sales_data_ch7(istream &is) { read(is, *this); }

    string isbn() {
        return bookNo;
    }

    Sales_data_ch7 &combine(const Sales_data_ch7 &);


    string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;
};


#endif //BETHPRIMER_SALES_DATA_CH7_H

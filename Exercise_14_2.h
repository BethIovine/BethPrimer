
#ifndef BETHPRIMER_EXERCISE_14_2_H
#define BETHPRIMER_EXERCISE_14_2_H

#include <string>
#include <iostream>

using namespace std;

class Sales_data_12_23 {
    friend istream &operator>>(istream &, Sales_data_12_23 &item);

    friend ostream &operator<<(ostream &, const Sales_data_12_23 &item);

    friend Sales_data_12_23 operator+(const Sales_data_12_23 &lhs, const Sales_data_12_23 &rhs);

public:
    Sales_data_12_23(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) {}

    Sales_data_12_23() : Sales_data_12_23("", 0, 0.0f) {}

    Sales_data_12_23(const string &s) : Sales_data_12_23(s, 0, 0.0f) {}

    Sales_data_12_23(istream &is);

    Sales_data_12_23 &operator+=(const Sales_data_12_23 &);

    Sales_data_12_23 &operator=(const string &str);

    std::string isbn() const { return bookNo; }

private:
    inline double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

istream &operator>>(istream &, Sales_data_12_23 &item);

ostream &operator<<(ostream &, const Sales_data_12_23 &item);

Sales_data_12_23 operator+(const Sales_data_12_23 &lhs, const Sales_data_12_23 &rhs);

inline double Sales_data_12_23::avg_price() const {
    return units_sold ? revenue / units_sold : 0;
}

#endif //BETHPRIMER_EXERCISE_14_2_H

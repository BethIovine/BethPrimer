#ifndef BETHPRIMER_QUOTE_H
#define BETHPRIMER_QUOTE_H

#include <iostream>

using namespace std;

class Quote {
public:
    Quote() = default;

    Quote(const string &b, double p) : bookNo(b), price(p) {}

    string isbn() const { return bookNo; }

    virtual double net_price(size_t n) const { return n * price; }

    virtual ~Quote() = default;

private:
    string bookNo;

protected:
    double price = 0.0;
};

#endif //BETHPRIMER_EXERCISE_15_3_H

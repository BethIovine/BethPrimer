

#ifndef BETHPRIMER_LIMIT_QUOTE_H
#define BETHPRIMER_LIMIT_QUOTE_H

#include "Quote.h"

class Limit_Quote : public Quote {
public:
    Limit_Quote() {}

    Limit_Quote(const string &b, double p, size_t max, double disc) : Quote(b, p), max_qty(max), discount(disc) {}

    double net_price(size_t n) const override;

private:
    size_t max_qty = 0;
    double discount = 0.0;
};

#endif //BETHPRIMER_LIMIT_QUOTE_H

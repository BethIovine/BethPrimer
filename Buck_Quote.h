
#ifndef BETHPRIMER_BUCK_QUOTE_H
#define BETHPRIMER_BUCK_QUOTE_H

#include "Quote.h"

class Buck_Quote:public Quote{
public:
    Buck_Quote() = default;
    Buck_Quote(const string& b,double p,size_t q,double dis):Quote(b,p),min_qty(q),discount(dis){}

    double net_price(size_t n) const override{
        return n * price * ( n >= min_qty ? 1 - discount : 1);
    }
private:
    size_t min_qty = 0;
    double discount = 0.0;
};

#endif //BETHPRIMER_BUCK_QUOTE_H

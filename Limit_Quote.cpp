#include "Limit_Quote.h"

double Limit_Quote::net_price(size_t n) const {
    if (n > max_qty)
        return max_qty * price * discount + (n - max_qty) * price;
    else
        return n * discount * price;
}
#include <iostream>
#include <vector>
#include "Quote.h"
#include "Buck_Quote.h"
using namespace std;


double print_total_15_6 (ostream& os, const Quote& item, size_t n);

int main_15_6()
{
    Quote q("textbook", 10.60);
    Buck_Quote bq("textbook", 10.60, 10, 0.3);

    print_total_15_6(cout, q, 12);
    print_total_15_6(cout, bq, 12);

    return 0;
}

double print_total_15_6(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN:" << item.isbn()
       << "# sold: " << n << " total due: " << ret << endl;

    return ret;
}
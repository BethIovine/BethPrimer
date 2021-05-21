#include "Person_ch7.h"

istream &read(istream &is, Person_ch7 &person) {
    is >> person.name >> person.address;
    return is;
}

ostream &print(ostream &os, const Person_ch7 &person) {
    os << person.print() << endl;
    return os;
}
#include <iostream>
#include <vector>
#include "Quote.h"
#include "Buck_Quote.h"

using namespace std;


class base {
public:
    string name() { return basename; }

    // only virtual member will be dynamic bound, and this member function will be called at run time.
    virtual void print(ostream &os) { os << basename; }

private:
    string basename;
};


class derived : public base {
public:
    void print(ostream &os) override {
        base::print(os);
        os << " " << i;
    }

private:
    int i;
};


int main_15_13() {
    derived s;
    s.print(cout);

    return 0;
}


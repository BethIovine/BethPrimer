#ifndef BETHPRIMER_EXERCISE_13_5_H
#define BETHPRIMER_EXERCISE_13_5_H

#include <iostream>

using namespace std;

class HasPtr {
    friend void swap(HasPtr &lhs, HasPtr &rhs);

    friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);

public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0), use(new size_t(1)) {}

    HasPtr(const HasPtr &x) : ps(new string(*(x.ps))), i(x.i), use(x.use) { ++(*x.use); }

    HasPtr &operator=(const HasPtr &x) {
        ++(*x.use);
        if (--(*x.use) == 0) {
            delete ps;
            delete use;
        }
        ps = x.ps;
        i = x.i;
        use = x.use;

        return *this;
    }

    ~HasPtr() {
        if (--(*use) == 0) {
            delete ps;
            delete use;
        }
    }

private:
    string *ps;
    int i;
    size_t *use;
};

inline void swap(HasPtr &lhs, HasPtr &rhs) {
    swap(lhs.ps, rhs.ps);
    swap(lhs.use, rhs.use);
    swap(lhs.i, rhs.i);
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs) {
    return *lhs.ps < *rhs.ps;
}

#endif //BETHPRIMER_EXERCISE_13_5_H

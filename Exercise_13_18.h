
#ifndef BETHPRIMER_EXERCISE_13_18_H
#define BETHPRIMER_EXERCISE_13_18_H

#include <iostream>

using namespace std;

class Employee {
public:
    Employee();

    Employee(const string &n);

    Employee(const Employee &x) = delete;

    Employee &operator=(const Employee &x) = delete;

private:
    size_t id;
    string name;
    static size_t number;
};

#endif //BETHPRIMER_EXERCISE_13_18_H

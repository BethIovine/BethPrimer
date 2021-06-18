#include "Exercise_13_18.h"

size_t Employee::number = 0;

Employee::Employee() {
    id = number++;
}

Employee::Employee(const string &n) {
    id = number++;
    name = n;
}


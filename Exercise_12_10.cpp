#include <iostream>

using namespace std;

void process_12_10(shared_ptr<int> ptr) {
    cout << "inside the process function:" << ptr.use_count() << "\n";
}

int main_12_10() {
    shared_ptr<int> p(new int(42));
    process_12_10(p);

    cout << p.use_count() << "\n";
    auto q = p;
    cout << p.use_count() << "\n";
    cout << "the int p now points to is:" << *p << "\n";
    return 0;
}
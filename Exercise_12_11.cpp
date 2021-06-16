#include <iostream>

using namespace std;

void process_12_11(shared_ptr<int> ptr) {
    cout << "inside the process function:" << ptr.use_count() << "\n";
}

//Error, free twice
int main_12_11() {
    shared_ptr<int> p(new int(42));

    process_12_11(shared_ptr<int>(p.get()));

    cout << p.use_count() << "\n";
    auto q = p;
    cout << p.use_count() << "\n";
    cout << "the int p now points to is:" << *p << "\n";
    return 0;
}
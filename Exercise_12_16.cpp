#include <iostream>

using namespace std;

//Error, free twice
int main_12_16() {
    unique_ptr<int> n(new int(5));
    //error operation, unique_ptr copy has been deleted
    //unique_ptr<int> m(n);
    //unique_ptr<int> m = n;

    n.reset(nullptr);
    return 0;
}
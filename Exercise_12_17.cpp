#include <iostream>

using namespace std;

//Error, free twice
int main_12_17() {
    int x = 1024;
    int *y = &x;
    int *z = new int(21);

    //unique_ptr<int> a(z);

    //Recommended
    unique_ptr<int> a(new int(21));
    return 0;
}
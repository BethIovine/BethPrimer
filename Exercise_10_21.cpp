#include <iostream>
#include <vector>

using namespace std;

int main_10_21() {
    int i = 15;
    auto decr = [&i](){return i>0?!(--i):!i;};

    while(!decr()) cout<<i<<endl;

    return 0;
}
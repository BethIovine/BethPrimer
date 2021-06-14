#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<typename T>
void Container_print(const T& con){
    for(auto& item:con) cout<<item<<"  ";
    cout<<endl;
}

int main_10_28() {
    vector<int> vec{1,2,3,4,5,6,7,8,9};

    list<int> l1;
    copy(vec.cbegin(),vec.cend(),front_inserter(l1));
    Container_print(l1);

    list<int> l2;
    copy(vec.cbegin(),vec.cend(),inserter(l2,l2.begin()));
    Container_print(l2);

    list<int> l3;
    copy(vec.cbegin(),vec.cend(),back_inserter(l3));
    Container_print(l3);


    return 0;
}
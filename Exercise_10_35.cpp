#include <iostream>
#include <vector>

using namespace std;

int main_10_35() {
    vector<int> vec{1,2,3,4,5,6,7,8};

    for(auto it = prev(vec.cend());;--it){
        cout<<*it<<"  ";
        if(it == vec.cbegin()) break;
    }
    cout<<endl;

    return 0;
}
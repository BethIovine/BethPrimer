#include <iostream>
#include <vector>

using namespace std;

int main_10_34() {
    vector<int> vec{1,2,3,4,5,6,7,8};

    for(reverse_iterator<vector<int>::iterator> it = vec.rbegin();it != vec.rend();cout<<*it<<"  ",++it);
    cout<<endl;

    return 0;
}
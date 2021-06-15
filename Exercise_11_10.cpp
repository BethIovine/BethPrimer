#include <iostream>
#include <map>
#include <vector>
#include <list>

using namespace std;

int main_11_10() {
    //  vector<int>::iterator to int is ok , because < is defined
    //  list<int>::iterator to int is not ok, as no < is defined.
    map<vector<int>::iterator, int> vit;
    map<list<int>::iterator, int> lit;


    return 0;
}
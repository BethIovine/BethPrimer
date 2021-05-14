#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main_3_24() {
    vector<int> nums;

    cout << "Please enter at least two nums:" << endl;
    for (int i; cin >> i; nums.push_back(i));
    if (nums.size() < 2){return -1;}

    for(auto it=nums.cbegin();it+1 !=nums.cend();++it)
        cout<<*it + *(it+1)<<"  ";
    cout<<endl;

    return 0;
}
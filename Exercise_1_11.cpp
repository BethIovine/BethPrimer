#include <iostream>

using namespace std;

int main_1_11() {
    int v1 = 0,v2 = 0;

    cout<<"Enter two number :"<<endl;
    cin >> v1 >>v2;

    if(v1 > v2) swap(v1,v2);
    while (v1 <= v2) {
        cout << v1 << "  ";
        ++v1;
    }

    return 0;
}

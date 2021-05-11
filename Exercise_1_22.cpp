#include <iostream>
#include "chapter1/Sales_item.h"

using namespace std;

int main_1_22() {
    cout << "Enter several same book:" << endl;
    Sales_item total;

    if(cin>>total){
        Sales_item trans;
        while(cin>>trans){
            if(total.isbn() == trans.isbn()){
                total += trans;
            }else{
                cout<<total<<endl;
                total = trans;
            }
        }
        cout<<total<<endl;
    }else{
        cerr<<"No Data"<<endl;
        return -1;
    }

    return 0;
}

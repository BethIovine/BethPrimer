#include <iostream>
#include "Exercise_12_2.h"

using namespace std;

int main_12_20() {
    StrBlob strs;
    string str;
    while(getline(cin,str) && str != "EOF"){
        strs.push_back(str);
    }

    for(StrBlobPtr p_beg=strs.begin(),p_end = strs.end();p_beg != p_end;p_beg.incr()){
        cout<<p_beg.deref()<<endl;
    }

    return 0;
}
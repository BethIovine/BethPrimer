#include <iostream>
#include <vector>

using namespace std;

int main_5_14() {
    pair<string, int> maxCnt;
    int count = 0;

    for (string str, pre; cin >> str && str != "EOF"; pre = str) {
        if (str == "") continue;

        if (str == pre) ++count;
        else count = 1;

        if (count > maxCnt.second) maxCnt = {str, count};
    }

    if (maxCnt.first.empty()) cout << "No duplicate string" << endl;
    else cout << maxCnt.first << " occur " << maxCnt.second << " times." << endl;

    return 0;
}
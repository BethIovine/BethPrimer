#include <iostream>

using namespace std;

int main_1_9() {
    int cnt = 50, sum = 0;

    while (cnt <= 100) {
        sum += cnt;
        ++cnt;
    }

    cout << "Sum from 50 to 100 get result " << sum << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main_3_17() {
    vector<string> word_net;

    cout << "Please enter a lot of words:" << endl;
    for (string word; cin >> word && word != "EOF"; word_net.push_back(word));
    for (string &word:word_net) for (char &c:word) c = toupper(c);

    for (int i = 0; i < word_net.size(); ++i) {
        if (i != 0 && i % 8 == 0) cout << endl;
        cout << word_net[i] << "  ";
    }
    cout << endl;

    return 0;
}
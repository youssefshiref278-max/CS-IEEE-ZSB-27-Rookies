#include <iostream>
using namespace std;

int main() {
    int n, rat;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> rat;

        if (rat >= 1900) {
            cout << "Division 1" << endl;
        }
        else if (rat >= 1600) {
            cout << "Division 2" << endl;
        }
        else if (rat >= 1400) {
            cout << "Division 3" << endl;
        }
        else {
            cout << "Division 4" << endl;
        }
    }

    return 0;
}

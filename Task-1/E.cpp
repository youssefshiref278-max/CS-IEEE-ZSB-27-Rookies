#include <iostream>
using namespace std;

int main() {
    char arr[] = {'c','o','d','e','f','o','r','c','e','s'};
    int size = sizeof(arr) / sizeof(arr[0]);

    int n;
    char c;
    cin >> n;

    for (int x = 0; x < n; x++) {
        cin >> c;
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (c == arr[i]) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

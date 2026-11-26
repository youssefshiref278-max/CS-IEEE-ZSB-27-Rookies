#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N >= 100 && N <= 999) {
        cout << setw(2) << setfill('0') << N % 100;
    }

    return 0;
}

#include <iostream>
using namespace std;

void solve(int N) {
    int numOf5 = N / 3 * 3;
    int numOf3 = N - numOf5;

    while (numOf3 % 5 != 0 && numOf5 > 0) {
        numOf5 -= 3;
        numOf3 += 3;
    }

    if (numOf5 % 3 == 0 && numOf3 % 5 == 0) {
        cout << string(numOf5, '5') << string(numOf3, '3');
    } else {
        cout << -1;
    }

    cout << endl;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        solve(N);
    }
    return 0;
}

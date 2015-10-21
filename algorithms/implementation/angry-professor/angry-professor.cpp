#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        int K;
        cin >> N >> K;
        for (int j = 0; j < N; ++j) {
            int a;
            cin >> a;
            if (a <= 0)
                --K;
        }

        cout << (K > 0 ? "YES" : "NO") << endl;
    }
    return 0;
}


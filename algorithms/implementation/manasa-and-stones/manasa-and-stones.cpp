#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;

        int step = abs(a-b);
        int answer = min(a, b) * (n-1);
        cout << answer;
        for (int i = step ? 1 : n; i < n; ++i) {
            answer += step;
            cout << " " << answer;
        }
        cout << endl;
    }
    return 0;
}

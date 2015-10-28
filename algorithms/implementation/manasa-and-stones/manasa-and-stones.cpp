#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;
        set<int> answer;
        for (int i = 0; i < n; ++i) {
            answer.insert((a * i) + (b * (n - i - 1)));
        }

        cout << *answer.begin();
        for (auto it = ++answer.begin(); it != answer.end(); ++it)
            cout << ' ' << *it;
        cout << endl;
    }
    return 0;
}

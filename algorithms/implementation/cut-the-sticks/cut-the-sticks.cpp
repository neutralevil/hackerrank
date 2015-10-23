#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> sticks;
    copy_n(istream_iterator<int>(cin), N, back_inserter(sticks));
    sort(sticks.begin(), sticks.end());
    int shortest = 0;
    cout << N << endl;
    for (int i = 0; i < N; ++i) {
        if (sticks[shortest] != sticks[i]) {
            cout << (N - i) << endl;
            shortest = i;
        }
    }
    return 0;
}
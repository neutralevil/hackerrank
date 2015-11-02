#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isKaprekarNumber(long long n) {
    auto sqr = n * n;
    vector<int> digits;
    do {
        int d = sqr % 10;
        digits.push_back(d);
        sqr /= 10;
    } while (sqr > 0);

    auto mid = (digits.size() + 1) / 2;

    int r = 0;
    for (int i = mid - 1; i >= 0; --i) {
        r *= 10;
        r += digits[i];
    }
    int l = 0;
    for (int i = digits.size() - 1; i >= mid; --i) {
        l *= 10;
        l += digits[i];
    }

    return l + r == n;
}

int main() {
    int p, q;
    cin >> p >> q;
    bool found = false;
    for (int n = p; n <= q; ++n) {
        if (isKaprekarNumber(n)) {
            cout << (found ? " " : "") << n;
            found = true;
        }
    }

    if (!found)
        cout << "INVALID RANGE" << endl;

    return 0;
}

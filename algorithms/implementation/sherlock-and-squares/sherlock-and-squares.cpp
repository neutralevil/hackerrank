#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long low, high;
        cin >> low >> high;
        int c = (int)floor(sqrt(high)) - (int)ceil(sqrt(low)) + 1;
        cout << max(c, 0) << endl;
    }
    return 0;
}
